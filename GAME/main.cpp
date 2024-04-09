#include "CommonFunc.h"
#include "mainFunc.h"

using namespace std;


bool init();


bool loadMedia();


void close();

int thu2[10000];

bool thudaptuong[10000];

int thucato[10000];

int thubigfish[10000];


//int i = 0;
//int j = 0;
//int count = 22;
//int x = 0;
//int y = 0;
//double x1 = SCREEN_WIDTH / 2;
//double y1 = 0;
//double x2 = 250;
//double y2 = 250;
//int thu = 0;
//
//bool lose = true;
//int h = 0;
//int k = 0;
//int h1 = 0;
//int k1 = 0;
//int h2 = 0;
//int k2 = 0;

int main(int argc, char* args[])
{
	//std::srand(std::time(NULL));
	int i = 0;
	int j = 0;
	int count = 22;
	int x = 0;
	int y = 0;
	double x1 = SCREEN_WIDTH / 2;
	double y1 = 0;
	double x2 = 250;
	double y2 = 250;
	int thu = 0;
	//
	bool lose = true;
	int h = 0;
	int k = 0;
	int h1 = 0;
	int k1 = 0;
	int h2 = 0;
	int k2 = 0;


	//std::srand(std::time(nullptr));
	if (!init())
	{
		printf("Failed to initialize!\n");
	}
	else
	{

		if (!loadMedia())
		{
			printf("Failed to load media!\n");
		}
		else
		{
			/*Mix_PlayMusic(music, -1);*/

			bool quit = false;

			int curentImageIndex = 0;
			int flameTime;
			Uint32 flameStart;
			SDL_Event e;
			bool flipImage = false;

			while (!quit)
			{
				flameStart = SDL_GetTicks();
				while (SDL_PollEvent(&e) != 0)
				{

					if (e.type == SDL_QUIT)
					{
						quit = true;

					}
					if (e.type == SDL_MOUSEBUTTONDOWN)
					{
						cout << 1;
						start = 1;
					}
				}
				/*if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDL_MOUSEBUTTONDOWN ) {

					restart();
				}*/

				if (start == 0)
				{
					SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
					SDL_RenderClear(gRenderer);

					Mix_PlayMusic(music, -1);

					SDL_Rect startgame = { 0,0,SCREEN_WIDTH,SCREEN_HEIGHT };
					SDL_RenderClear(gRenderer);
					SDL_RenderCopy(gRenderer, startmenu, NULL, &startgame);
					SDL_RenderPresent(gRenderer);
				}

				/*if(start == 0) Mix_PlayMusic(music, -1);
				else Mix_PlayMusic(daddy, -1);*/

				if (start == 1)
				{

					if (e.motion.xrel > 0) {
						fliptype = SDL_FLIP_NONE;
					}
					if (e.motion.xrel < 0) {
						fliptype = SDL_FLIP_HORIZONTAL;
					}
					/*std::cout << dem;*/









					for (int i = 0; i < (int)muoi.size(); i++) {
						if ((int)abs(x - muoi[i].xk) <= 20 && (int)abs(y - muoi[i].yk) <= 20)
						{

							SDL_DestroyTexture(muoi[i].Texmuoi);
							muoi[i].xk = -100;
							muoi[i].yk = -100;
							if (dem <= 40)
								Mix_PlayChannel(-1, eatlevel1, 1);

							dem += 1;
						}
					}
					for (int i = 0; i < 10; i++) {
						if ((int)abs(x - muoito[i].xk) <= 50 && (int)abs(y - muoito[i].yk) <= 50 && dem >= 10)
						{
							SDL_DestroyTexture(muoito[i].Texmuoi);
							muoito[i].xk = -100;
							muoito[i].yk = -100;
							if (dem <= 40)
								Mix_PlayChannel(-1, eatlevel2, 1);
							dem += 1;
						}
					}
					for (int i = 0; i < (int)muoito.size(); i++)
					{
						if (abs(x - muoito[i].xk) <= 40 && abs(y - muoito[i].yk) <= 40 && dem < 10)
						{
							SDL_DestroyTexture(gTexture1);
							lose = false;
						}
					}
					for (int i = 0; i < (int)bigfish.size(); i++) {
						if ((int)abs(x - bigfish[i].xk) <= 50 && (int)abs(y - bigfish[i].yk) <= 50 && dem >= 20)
						{
							SDL_DestroyTexture(bigfish[i].Texmuoi);
							bigfish[i].xk = -100;
							bigfish[i].yk = -100;
							Mix_PlayChannel(-1, eatlevel3, 1);
							dem += 1;
						}
					}
					for (int i = 0; i < 5; i++)
					{
						if (abs(x - bigfish[i].xk) <= 40 && abs(y - bigfish[i].yk) <= 40 && dem < 20) {
							SDL_DestroyTexture(gTexture1);
							lose = false;
						}
					}

					for (int i = 0; i < (int)bigfish.size(); i++)
					{
						for (int j = 0; j < (int)muoito.size(); j++)
						{
							//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
							if (abs(bigfish[i].xk - muoito[j].xk) <= 50 && abs(bigfish[i].yk - muoito[j].yk) <= 50)
							{
								SDL_DestroyTexture(muoito[j].Texmuoi);
								muoito[j].xk = -100;
								muoito[j].yk = -100;
							}
						}
					}
					for (int i = 0; i < (int)bigfish.size(); i++)
					{
						for (int j = 0; j < (int)muoi.size(); j++)
						{
							//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
							if (abs(bigfish[i].xk - muoi[j].xk) <= 20 && abs(bigfish[i].yk - muoi[j].yk) <= 20)
							{
								SDL_DestroyTexture(muoi[j].Texmuoi);
								muoi[j].xk = -100;
								muoi[j].yk = -100;
							}
						}
					}
					for (int i = 0; i < (int)muoito.size(); i++)
					{
						for (int j = 0; j < (int)muoi.size(); j++)
						{
							//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
							if (abs(muoito[i].xk - muoi[j].xk) <= 20 && abs(muoito[i].yk - muoi[j].yk) <= 20)
							{
								SDL_DestroyTexture(muoi[j].Texmuoi);
								muoi[j].xk = -100;
								muoi[j].yk = -100;
							}
						}
					}
					SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
					SDL_RenderClear(gRenderer);


					SDL_Rect topLeftViewport;
					topLeftViewport.x = 0;
					topLeftViewport.y = 0;
					topLeftViewport.w = SCREEN_WIDTH;
					topLeftViewport.h = SCREEN_HEIGHT;
					SDL_RenderSetViewport(gRenderer, &topLeftViewport);




					SDL_RenderClear(gRenderer);
					SDL_RenderCopy(gRenderer, gTexture, NULL, NULL);




					SDL_Rect rectmuoi[50];
					int testquaydau[50] = {};
					h1 = (h1 + 1) % 4;
					k1 = (k1 + h1 / 3) % 14;
					for (int i = 0; i < (int)muoi.size(); i++)
					{

						SDL_Rect ca_nho[13];
						for (int k = 0; k < 13; k++)
						{
							ca_nho[k] = { k * 480,0,480,270 };
						}
						if (muoi[i].xk == 1280)
						{
							thu2[i] = 0;
						}
						else if (muoi[i].xk <= 0)
						{
							thu2[i] = 1;
						}
						if (k1 >= 13)
						{
							k1 = 0;
						}
						if (muoi[i].yk >= 700)
						{
							muoi[i].trongmanhinh = false;
						}
						if (muoi[i].yk <= 0)
						{
							muoi[i].trongmanhinh = false;
						}
						if (muoi[i].trongmanhinh == false)
						{

							if (muoi[i].yk >= 700) muoi[i].ykdaptuong = -2;
							if (muoi[i].yk <= 0) muoi[i].ykdaptuong = 2;
						}
						if (abs(muoi[i].yk - y) < 50 && abs(muoi[i].xk - x) < 150)
						{
							testquaydau[i] = 1;
						}
						if (thu2[i] == 1 && testquaydau[i] == 1)
						{
							rectmuoi[i] = { muoi[i].xk -= 2,muoi[i].yk += (rand() % 3) * ((rand() % 2 == 0) ? -1 : 1), 80, 80 };
							SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_NONE);


						}
						else if (thu2[i] == 0 && testquaydau[i] == 1)
						{
							rectmuoi[i] = { muoi[i].xk += 2, muoi[i].yk += (rand() % 3) * ((rand() % 2 == 0) ? -1 : 1), 80, 80 };
							SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

						}
						else if (thu2[i] == 0)
						{
							rectmuoi[i] = { muoi[i].xk -= (rand() % 3) , muoi[i].yk += canhodichuyen[i].dichuyen, 80, 80 };
							SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_NONE);
							if (muoi[i].trongmanhinh == false)
							{
								rectmuoi[i] = { muoi[i].xk -= (rand() % 3) , muoi[i].yk += muoi[i].ykdaptuong, 80, 80 };
								SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_NONE);
								//muoi[i + 1].trongmanhinh = false;
							}


						}
						else if (thu2[i] == 1)
						{
							rectmuoi[i] = { muoi[i].xk += (rand() % 3) ,muoi[i].yk += canhodichuyen[i].dichuyen, 80, 80 };
							SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_HORIZONTAL);
							if (muoi[i].trongmanhinh == false)
							{
								rectmuoi[i] = { muoi[i].xk += (rand() % 3) , muoi[i].yk += muoi[i].ykdaptuong, 80, 80 };
								SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_HORIZONTAL);
								//muoi[i + 1].trongmanhinh = false;
							}

						}
					}






					SDL_Rect Rectcato[10];

					int ca_to_quay_dau[10] = {};

					h = (h + 1) % 4;
					k = (k + h / 3) % 26;
					for (int i = 0; i < 10; i++)
					{

						SDL_Rect ca_vua[29];
						for (int k = 0; k < 29; k++)
						{
							ca_vua[k] = { k * 480,0,480,480 };
						}

						if (muoito[i].xk == 1280)
						{

							thucato[i] = 0;

						}
						else if (muoito[i].xk <= 0)
						{

							thucato[i] = 1;

						}
						if (k >= 29)
						{
							k = 0;
						}
						if (abs(muoito[i].yk - y) < 50 && abs(muoito[i].xk - x) < 150)
						{
							ca_to_quay_dau[i] = 1;
						}
						if (thucato[i] == 1 && ca_to_quay_dau[i] == 1 && dem >= 10)
						{
							Rectcato[i] = { muoito[i].xk -= 4, muoito[i].yk += 0, 80, 80 };
							SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_NONE);


						}
						else if (thucato[i] == 0 && ca_to_quay_dau[i] == 1 && dem >= 10)
						{
							Rectcato[i] = { muoito[i].xk += 4, muoito[i].yk += 0, 80, 80 };
							SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_HORIZONTAL);


						}
						else if (thucato[i] == 0)
						{
							Rectcato[i] = { muoito[i].xk -= 2, muoito[i].yk += 0, 80, 80 };
							SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_NONE);
						}
						else if (thucato[i] == 1)
						{
							Rectcato[i] = { muoito[i].xk += 2,muoito[i].yk += 0, 80, 80 };
							SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

						}


					}

					SDL_Rect Rectbigfish[5];

					int bigfish_quay_dau[5] = {};
					h2 = (h2 + 1) % 4;
					k2 = (k2 + h2 / 3) % 25;

					for (int i = 0; i < 5; i++)
					{
						SDL_Rect ca_to[29];
						for (int k = 0; k < 29; k++)
						{
							ca_to[k] = { k * 480,0,480,345 };
						}

						if (bigfish[i].xk == 1280)
						{

							thubigfish[i] = 0;

						}
						else if (bigfish[i].xk <= 0)
						{

							thubigfish[i] = 1;

						}

						if (abs(bigfish[i].yk - y) < 100 && abs(bigfish[i].xk - x) < 350)
						{
							bigfish_quay_dau[i] = 1;
						}
						if (thubigfish[i] == 1 && bigfish_quay_dau[i] == 1 && dem >= 20)
						{
							Rectbigfish[i] = { bigfish[i].xk -= 4, bigfish[i].yk += 0, 150, 150 };
							SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_NONE);

						}
						else if (thubigfish[i] == 0 && bigfish_quay_dau[i] == 1 && dem >= 20)
						{
							Rectbigfish[i] = { bigfish[i].xk += 4, bigfish[i].yk += 0, 150, 150 };
							SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

						}
						else if (thubigfish[i] == 0)
						{
							Rectbigfish[i] = { bigfish[i].xk -= 2, bigfish[i].yk += 0, 150, 150 };
							SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_NONE);

						}
						else if (thubigfish[i] == 1)
						{
							Rectbigfish[i] = { bigfish[i].xk += 2,bigfish[i].yk += 0, 150, 150 };
							SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_HORIZONTAL);
						}


					}





					SDL_Rect rect[19];

					for (int i = 0; i < 19; i++) {
						rect[i] = { i * 115  ,0  ,114,114 };
					}


					SDL_GetMouseState((&x), (&y));

					SDL_Rect rect4;
					if (dem < 10)
					{
						rect4 = { x - 50,y - 50,100,100 };
					}
					if (dem >= 10) rect4 = { x - 100,y - 100,200,200 };
					if (dem >= 20) rect4 = { x - 150,y - 150,300,300 };
					SDL_RenderCopyEx(gRenderer, gTexture1, &rect[i], &rect4, 0, NULL, fliptype);
					j = (j + 1) % 11;
					i = (i + j / 10) % 20;
					if (i >= 19)
					{
						i = 0;
					}

					SDL_Delay(20);
					if (dem >= 30)
					{
						SDL_Rect inwin = { 0,00,SCREEN_WIDTH ,SCREEN_HEIGHT };
						SDL_RenderCopy(gRenderer, win, NULL, &inwin);
						start = 0;

					}
					if (lose == false)
					{
						SDL_Rect inlose = { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };
						SDL_RenderCopy(gRenderer, Lose, NULL, &inlose);
						start = 0;

					}


					SDL_RenderPresent(gRenderer);
				}
			}
		}
	}



	close();

	return 0;
}
