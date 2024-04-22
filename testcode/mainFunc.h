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

TTF_Font* font_tong;

TextObject ca_nho;
TextObject ca_vua;
TextObject ca_to;
TextObject dem_gio;
TextObject sound;
TextObject Music;

std::vector<object> muoi;
std::vector<object> muoito;
std::vector<object> bigfish;

std::vector<Move> canhodichuyen;

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

	// Kh?i t?o SDL2_mixer
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
		printf("SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError());
		return 0;
	}
	if (TTF_Init() == -1)
	{
		success = false;
	}
	/*font_tong = TTF_OpenFont("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/font/font_tong.ttf", 15);*/
	/*if (font_tong == NULL) {
		success = false;
	}*/

	return success;
}



bool loadMedia()
{

	bool success = true;
	font_tong = TTF_OpenFont("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/font/font_tong.ttf", 50);


	Boss = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/taungamoke.png");
	music = Mix_LoadMUS("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/ingame.mp3");
	daddy = Mix_LoadMUS("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/menu.mp3");
	eatlevel1 = Mix_LoadWAV("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/eatlevel1.wav");
	eatlevel2 = Mix_LoadWAV("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/eatlevel2.wav");
	eatlevel3 = Mix_LoadWAV("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/eatlevel3.wav");
	//bang = Mix_LoadWAV("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/bang.wav");

	gTexture = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/bkf.jpg");
	gTexture1 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/mainshark.png");
	gTexture2 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/bg2.jpg");
	gTexture3 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/bgk2.jpg");

	ulti = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/ultimate.png");

	board = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/board.png");
	pausegame = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/pausebutton.png");
	iconsmall = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/iconsmall.png");
	iconmid = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/iconmidfish.png");
	iconbig = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/iconbigfish.png");

	option = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/option.jpg");

	option_item = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/item_.png");

	arrow = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/mui_ten.png");

	turn_on = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/item_music_turnon.png");
	turn_off = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/item_music_turnoff.png");

	startmenu = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/startmenu.jpg");
	Pause = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/pause.jpg");
	Bullet1 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/bullet1.png");
	Type = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/choose_type_oke.jpg");
	Type1 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/bkf.jpg");
	Type2 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/bg2.jpg");
	Type3 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/bgk2.jpg");
	muoi.resize(20);
	muoito.resize(10);
	bigfish.resize(5);
	canhodichuyen.resize(20);
	for (int i = 0; i < 20; i++)
	{
		muoi[i].Texmuoi = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/smallfish1.png");
	}
	for (int i = 0; i < 10; i++)
	{

		muoito[i].Texmuoi = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/mid_fishok.png");

	}
	for (int i = 0; i < 5; i++)
	{

		bigfish[i].Texmuoi = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/test1/test1/picture/bigfishok.png");

	}
	Win = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/win.jpg");
	Lose = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/defeat.png");
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

void handleRestart() {

	close();


	if (!init()) {
		std::cout << "Failed to restart SDL." << std::endl;

		return;
	}


}


#endif