#pragma once
#ifndef MAIN_FUNCTIONS_H
#define MAIN_FUNCTIONS_H

#include "CommonFunc.h"
#include "Text.h"

using namespace std;

class object {
public:
	SDL_Texture* Texmuoi;
	int xk;
	int yk;
	double k;
	bool trongmanhinh = true;
	int ykdaptuong = 0;
	bool test_alive = 1;
	void free() {
		SDL_Texture* Texmuoi;
		trongmanhinh = true;
		ykdaptuong = 0;
		test_alive = 1;
		xk = 1280 * ((std::rand() % 4) <= 1);
		yk = std::rand() % (650 - 50 + 1) + 50;

	}
	object() :
		xk(1280 * ((std::rand() % 4) <= 1)),
		yk(std::rand() % (650 - 50 + 1) + 50)
	{}
};
class Move {
public:
	int dichuyen;

	Move() :
		dichuyen(std::rand() % 2 == 0 ? -1 : 1)
	{}
};

class Boss_Bullet {
public:
	int x;
	int y;
	void rebullet() {
		x = 250; y = 250;
	}
};

class di_chuyen {
public:
	int ca_vua_di_chuyen = rand() % (4 - 1 + 1) + 1;
	int ca_to_di_chuyen = rand() % (2 - 1 + 1) + 1;
};

TTF_Font* font_tong;

TextObject ca_nho;
TextObject ca_vua;
TextObject ca_to;
TextObject dem_gio;
TextObject sound;
TextObject Music;
TextObject score;
TextObject dan_con_lai;

std::vector<object> muoi;
std::vector<object> muoito;
std::vector<object> bigfish;

std::vector<Move> canhodichuyen;

std::vector<di_chuyen> Mid_Fish(10);
std::vector<di_chuyen> Big_Fish(5);

bool init();
bool loadMedia();
void close();

SDL_Texture* loadTexture(std::string path);


bool init()
{

	bool success = true;


	gWindow = SDL_CreateWindow("danhnahh", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);


	gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
	if (gRenderer == NULL)
	{
		printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{

		SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);


		int imgFlags = IMG_INIT_PNG;
		if (!(IMG_Init(imgFlags) & imgFlags))
		{
			printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
			success = false;
		}
	}
	if (SDL_Init(SDL_INIT_AUDIO) < 0) {
		printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
		return 0;
	}

	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
		printf("SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError());
		return 0;
	}
	if (TTF_Init() == -1)
	{
		success = false;
	}

	return success;
}



bool loadMedia()
{

	bool success = true;
	//font_tong = TTF_OpenFont("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/font/font_tong.ttf", 50);

	logo = loadTexture("picture//chu_menu.png");

	iconsurface = IMG_Load("picture//logo.jpg");

	font_tong = TTF_OpenFont("font/font_tong.ttf", 50);

	Boss[0] = loadTexture("picture//taungamoke.png");
	Boss[1] = loadTexture("picture//tau_ngam_2.png");
	Boss[2] = loadTexture("picture//tau_ngam_3.png");
	Boss[3] = loadTexture("picture//tau_ngam_4.png");

	music = Mix_LoadMUS("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/ingame.mp3");

	daddy = Mix_LoadMUS("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/menu.mp3");
	eatlevel1 = Mix_LoadWAV("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/eatlevel1.wav");
	eatlevel2 = Mix_LoadWAV("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/eatlevel2.wav");
	eatlevel3 = Mix_LoadWAV("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/eatlevel3.wav");
	//bang = Mix_LoadWAV("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/bang.wav");


	gTexture1 = loadTexture("picture//mainshark.png");


	ulti = loadTexture("picture//ultimate.png");

	board = loadTexture("picture//board.png");
	pausegame = loadTexture("picture//pausebutton.png");
	iconsmall = loadTexture("picture//iconsmall.png");
	iconmid = loadTexture("picture//iconmidfish.png");
	iconbig = loadTexture("picture//iconbigfish.png");

	option = loadTexture("picture//option.jpg");

	option_item = loadTexture("picture//item_.png");

	wood = loadTexture("picture//van_go.png");

	arrow = loadTexture("picture//mui_ten.png");

	turn_on = loadTexture("picture//item_music_turnon.png");

	turn_off = loadTexture("picture//item_music_turnoff.png");

	startmenu = loadTexture("picture//startmenu.jpg");
	Pause = loadTexture("picture//pause.jpg");

	Bullet1[0] = loadTexture("picture//bullet0.png");
	Bullet1[1] = loadTexture("picture//bullet1.png");
	Bullet1[2] = loadTexture("picture//bullet2.png");
	Bullet1[3] = loadTexture("picture//bullet3.png");

	Type = loadTexture("picture//choose_type_oke.jpg");
	Type1 = loadTexture("picture//bkf.jpg");
	Type2 = loadTexture("picture//bg2.jpg");
	Type3 = loadTexture("picture//bgk2.jpg");

	tick = loadTexture("picture//TICK.png");

	play = loadTexture("picture//play.png");
	muoi.resize(20);
	muoito.resize(10);
	bigfish.resize(5);
	canhodichuyen.resize(20);
	muoi[0].Texmuoi = loadTexture("picture//smallfish1.png");
	for (int i = 0; i < 20; i++)
	{
		muoi[i].Texmuoi = muoi[0].Texmuoi;
	}
	muoito[0].Texmuoi = loadTexture("picture//mid_fishok.png");
	for (int i = 0; i < 10; i++)
	{
		muoito[i].Texmuoi = muoito[0].Texmuoi;
	}
	bigfish[0].Texmuoi = loadTexture("picture//bigfishok.png");
	for (int i = 0; i < 5; i++)
	{
		bigfish[i].Texmuoi = bigfish[0].Texmuoi;
	}
	Win = loadTexture("picture//win.jpg");
	Lose = loadTexture("picture//defeat.png");
	return success;
}


SDL_Texture* loadTexture(std::string path)
{
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load(path.c_str());
	//Create texture from surface pixels
	newTexture = SDL_CreateTextureFromSurface(gRenderer, loadedSurface);
	//Get rid of old loaded surface
	SDL_FreeSurface(loadedSurface);
	return newTexture;
}

void close()
{
	//Free loaded image
	SDL_DestroyTexture(gTexture);
	gTexture = NULL;

	//Destroy window	
	SDL_DestroyRenderer(gRenderer);
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;
	gRenderer = NULL;
	Mix_FreeMusic(music);
	Mix_FreeMusic(daddy);
	Mix_CloseAudio();
	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}


#endif