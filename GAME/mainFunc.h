#pragma once
#ifndef MAIN_FUNCTIONS_H
#define MAIN_FUNCTIONS_H

#include "CommonFunc.h"
using namespace std;

class object {
public:
	SDL_Texture* Texmuoi;
	int xk;
	int yk;
	double k;
	bool trongmanhinh = true;
	int ykdaptuong;
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


	return success;
}

bool loadMedia()
{

	bool success = true;
	music = Mix_LoadMUS("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/music/babyshark1.mp3");
	gTexture = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/bkf.jpg");
	gTexture1 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/mainshark.png");
	gTexture2 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/smallfish.png");
	gTexture3 = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/smallfish.png");
	muoi.resize(50);
	muoito.resize(10);
	bigfish.resize(5);
	canhodichuyen.resize(50);
	for (int i = 0; i < 50; i++)
	{

		muoi[i].Texmuoi = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/smallfish1.png");
		//muoi[i].xk = 1280 * ((std::rand() % 4) <= 1);
		//muoi[i].yk = std::rand() % (720 - 50 + 1) + 50;
	}
	for (int i = 0; i < 10; i++)
	{

		muoito[i].Texmuoi = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/mid_fishok.png");
		//muoito[i].xk = 1280 * ((std::rand() % 4) <= 1);
		//muoito[i].yk = std::rand() % (720 - 50 + 1) + 50;
	}
	for (int i = 0; i < 5; i++)
	{

		bigfish[i].Texmuoi = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/test1/test1/picture/bigfishok.png");
		//bigfish[i].xk = 1280 * ((std::rand() % 4) <= 1);
		//bigfish[i].yk = std::rand() % (720 - 50 + 1) + 50;
	}
	win = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/win.jpg");
	//Lose = loadTexture("D:/UET/C++/vscode violet/CHECKCODE/testcode/Debug/picture/defeat.png");
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
	Mix_CloseAudio();
	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}

#endif