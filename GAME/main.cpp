#include "CommonFunc.h"
#include "mainFunc.h"

using namespace std;


int prevX = 0;
int prevY = 0;
float angle = 0.0f;
float speed = 0.1f;

bool init();


bool loadMedia();


void close();

int thu2[10000];

int thucato[10000];

int thubigfish[10000];

SDL_RendererFlip fliptype = SDL_FLIP_NONE;

SDL_RendererFlip fliptype1;

SDL_RendererFlip fliptypecato;

int main(int argc, char* args[])
{
	std::srand(std::time(NULL));
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
	int dem = 0;
	bool lose = true;
	int h = 0;
	int k = 0;
	int h1 = 0;
	int k1 = 0;
	int h2 = 0;
	int k2 = 0;

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
				}
				if (e.motion.xrel > 0) {
					fliptype = SDL_FLIP_NONE;
				}
				if (e.motion.xrel < 0) {
					fliptype = SDL_FLIP_HORIZONTAL;
				}


				for (int i = 0; i < (int)muoi.size(); i++) {
					if ((int)abs(x - muoi[i].xk) <= 20 && (int)abs(y - muoi[i].yk) <= 20)
					{
						SDL_DestroyTexture(muoi[i].Texmuoi);
						muoi[i].xk = -10;
						muoi[i].yk = -10;
						count -= 1;
						dem += 1;
					}
				}
				for (int i = 0; i < 10; i++) {
					if ((int)abs(x - muoito[i].xk) <= 50 && (int)abs(y - muoito[i].yk) <= 50 && dem >= 10)
					{
						SDL_DestroyTexture(muoito[i].Texmuoi);
						muoito[i].xk = -10;
						muoito[i].yk = -10;
						count -= 1;
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
						bigfish[i].xk = -10;
						bigfish[i].yk = -10;
						count -= 1;
						dem += 1;
					}
				}
				for (int i = 0; i < 5; i++)
				{
					if (abs(x - bigfish[i].xk) <= 50 && abs(y - bigfish[i].yk) <= 50 && dem < 20) {
						SDL_DestroyTexture(gTexture1);
						lose = false;
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



				SDL_Rect rectmuoi[20];
				int testquaydau[20] = {};
				h1 = (h1 + 1) % 4;
				k1 = (k1 + h1 / 3) % 14;
				for (int i = 0; i < 20; i++)
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
					else if (muoi[i].xk == 0)
					{
						thu2[i] = 1;
					}
					if (k1 >= 13)
					{
						k1 = 0;
					}
					if (abs(muoi[i].yk - y) < 50 && abs(muoi[i].xk - x) < 150)
					{
						testquaydau[i] = 1;
					}
					if (thu2[i] == 1 && testquaydau[i] == 1)
					{
						rectmuoi[i] = { muoi[i].xk -= 2,muoi[i].yk += 0, 80, 80 };
						SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_NONE);


					}
					else if (thu2[i] == 0 && testquaydau[i] == 1)
					{
						rectmuoi[i] = { muoi[i].xk += 2, muoi[i].yk += 0, 80, 80 };
						SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

					}
					else if (thu2[i] == 0)
					{
						rectmuoi[i] = { muoi[i].xk -= 1, muoi[i].yk += 0, 80, 80 };
						SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_NONE);

					}
					else if (thu2[i] == 1)
					{
						rectmuoi[i] = { muoi[i].xk += 1,muoi[i].yk += 0, 80, 80 };
						SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

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
					else if (muoito[i].xk == 0)
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
					else if (bigfish[i].xk == 0)
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


				SDL_Rect rect4 = { x - 50,y - 50,100,100 };
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
				}
				if (lose == false)
				{
					SDL_Rect inlose = { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };
					SDL_RenderCopy(gRenderer, Lose, NULL, &inlose);
				}

				SDL_RenderPresent(gRenderer);
			}
		}
	}



	close();

	return 0;
}
