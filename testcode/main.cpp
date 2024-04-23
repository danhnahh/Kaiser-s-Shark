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

bool thubossquaydau = false;


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
	Boss_Bullet bullet;
	//std::srand(std::time(NULL));
	int i = 0;
	int j = 0;
	int count = 22;
	int x = 0;
	int y = 0;
	double x1 = SCREEN_WIDTH / 2;
	double y1 = 0;
	int x2 = 250;
	int y2 = 250;
	int thu = 0;
	//
	bool lose = true;
	int h = 0;
	int k = 0;
	int h1 = 0;
	int k1 = 0;
	int h2 = 0;
	int k2 = 0;
	int dem = 0;

	int size_x = 0;
	int size_y = 0;
	bool win = false;
	int typegame = 0;
	bool pause = false;
	float X;
	float Y;

	bool sound_button = true;

	int BULLET = 50;

	int start = 0;

	bool musicon = true;
	bool soundon = true;

	int boss_type = 0;
	int bullet_type = 0;

	bool alive = true;
	bullet.x = x2 + 100;
	bullet.y = y2 + 100;
	bullet.rebullet();
	int daban = false;
	float angle;
	bool click = false;
	bool checktype = false;

	int dem_ca_nho = 0;
	int dem_ca_vua = 0;
	int dem_ca_to = 0;

	bool check_until = false;

	/*diem_so.SetColor(TextObject::WHITE_TEXT);*/

	/*float delta_x;
	float delta_y;
	float angle;*/
	/*std::srand(std::time(nullptr));*/
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

			Mix_PlayMusic(daddy, -1);

			while (!quit)
			{
				flameStart = SDL_GetTicks();

				while (SDL_PollEvent(&e) != 0)
				{


					if (e.type == SDL_QUIT)
					{
						quit = true;

					}


					SDL_GetMouseState((&x), (&y));
					//cout << x << " " << y << endl;
					if (e.type == SDL_MOUSEBUTTONDOWN && x >= 478 && x <= 755 && y >= 275 && y <= 354 && checktype == false && start == 0)
					{

						cout << "okeokeoke";
						start = 1;
						click = true;
						checktype = true;
					}
					else if (e.type == SDL_MOUSEBUTTONUP) click = false;

					if (e.type == SDL_MOUSEBUTTONDOWN && x >= 503 && x <= 737 && y >= 402 && y <= 466 && start == 0)
					{

						start = 3;
						click = true;

					}
					else if (e.type == SDL_MOUSEBUTTONUP) click = false;

					if (e.type == SDL_MOUSEBUTTONDOWN && ((lose == false && x >= 518 && x <= 741 && y >= 601 && y <= 654) || (win == true && x >= 581 && x <= 695 && y >= 395 && y <= 435)))
					{
						bullet;
						win = false;
						lose = true;
						start = 0;
						int i = 0;
						int j = 0;
						int count = 22;
						int x = 0;
						int y = 0;
						double x1 = SCREEN_WIDTH / 2;
						double y1 = 0;
						x2 = 250;
						y2 = 250;
						int thu = 0;
						//
						dem_ca_nho = 0;
						dem_ca_vua = 0;
						dem_ca_to = 0;
						typegame = 0;

						BULLET = 50;



						int h = 0;
						int k = 0;
						int h1 = 0;
						int k1 = 0;
						int h2 = 0;
						int k2 = 0;
						dem = 0;
						size_x = 0;
						size_y = 0;
						checktype = false;
						alive = true;
						check_until = false;
						bullet.rebullet();
						bullet.x = x2 + 100;
						bullet.y = y2 + 100;
						for (int i = 0; i < (int)muoi.size(); i++) {
							muoi[i].free();
						}
						for (int i = 0; i < (int)muoito.size(); i++) {
							muoito[i].free();
						}
						for (int i = 0; i < (int)bigfish.size(); i++) {
							bigfish[i].free();
						}
						if (musicon == true) Mix_PlayMusic(daddy, -1);
					}

					if (pause == true)
					{
						if (e.type == SDL_MOUSEBUTTONDOWN && x >= 448 && x <= 829 && y >= 193 && y <= 295)
						{
							pause = false;
						}
						if (e.type == SDL_MOUSEBUTTONDOWN && x >= 428 && x <= 829 && y >= 368 && y <= 459)
						{
							bullet;
							win = false;
							pause = false;
							lose = true;
							start = 0;
							i = 0;
							j = 0;
							count = 22;

							x = 0;
							y = 0;
							x1 = SCREEN_WIDTH / 2;
							y1 = 0;
							x2 = 250;
							y2 = 250;
							thu = 0;
							size_x = 0;
							size_y = 0;

							BULLET = 50;

							dem_ca_nho = 0;
							dem_ca_vua = 0;
							dem_ca_to = 0;
							check_until = false;
							checktype = false;
							typegame = 0;
							h = 0;
							k = 0;
							h1 = 0;
							k1 = 0;
							h2 = 0;
							k2 = 0;
							dem = 0;
							alive = true;
							bullet.rebullet();
							bullet.x = x2 + 100;
							bullet.y = y2 + 100;
							for (int i = 0; i < (int)muoi.size(); i++) {
								muoi[i].free();
							}
							for (int i = 0; i < (int)muoito.size(); i++) {
								muoito[i].free();
							}
							for (int i = 0; i < (int)bigfish.size(); i++) {
								bigfish[i].free();
							}
							if (musicon == true) Mix_PlayMusic(daddy, -1);
						}
					}
					else
					{
						if (e.type == SDL_MOUSEBUTTONDOWN && x >= 1125 && x <= 1231 && y >= 17 && y <= 88)
						{
							pause = true;
						}
					}
				}
				X = x;
				Y = y;
				if (start == 0)
				{
					SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
					SDL_RenderClear(gRenderer);



					SDL_Rect startgame = { 0,0,SCREEN_WIDTH,SCREEN_HEIGHT };
					SDL_RenderClear(gRenderer);
					SDL_RenderCopy(gRenderer, startmenu, NULL, &startgame);

					SDL_Rect Play = { 503,275,235,70 };
					SDL_RenderCopy(gRenderer, play, NULL, &Play);

					SDL_Rect Option = { 503,402,230,70 };
					SDL_RenderCopy(gRenderer, option_item, NULL, &Option);
					SDL_RenderPresent(gRenderer);
				}
				cout << x << " " << y << endl;
				if (start == 3 && click == false)
				{
					SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
					SDL_RenderClear(gRenderer);







					SDL_Rect game_option = { 0,0,SCREEN_WIDTH,SCREEN_HEIGHT };
					SDL_RenderClear(gRenderer);
					SDL_RenderCopy(gRenderer, option, NULL, &game_option);






					SDL_Rect Wood1 = { 373,208,300,75 };
					SDL_RenderCopy(gRenderer, wood, NULL, &Wood1);
					SDL_Rect Wood2 = { 373,309,300,75 };
					SDL_RenderCopy(gRenderer, wood, NULL, &Wood2);
					//cout << click;

					//cout << x << " " << y << endl;
					if (soundon == true)
					{
						SDL_Rect Sound = { 580,220,48,48 };
						SDL_RenderCopy(gRenderer, turn_on, NULL, &Sound);
					}
					else if (soundon == false) {
						SDL_Rect Sound = { 580,220,48,48 };
						SDL_RenderCopy(gRenderer, turn_off, NULL, &Sound);
					}

					if (musicon == true)
					{
						SDL_Rect Music_button = { 580,320,48,48 };
						SDL_RenderCopy(gRenderer, turn_on, NULL, &Music_button);
					}
					else if (musicon == false) {
						SDL_Rect Music_button = { 580,320,48,48 };
						SDL_RenderCopy(gRenderer, turn_off, NULL, &Music_button);
					}


					if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT && x >= 580 && x <= 628 && y >= 220 && y <= 268)
					{
						if (soundon == true)
						{
							soundon = false;
							e.type = SDL_MOUSEBUTTONUP;
						}
						else {
							soundon = true;
							e.type = SDL_MOUSEBUTTONUP;
						}

					}

					if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT && x >= 580 && x <= 628 && y >= 320 && y <= 368)
					{
						if (musicon == true)
						{
							musicon = false;
							e.type = SDL_MOUSEBUTTONUP;
							Mix_HaltMusic();
						}
						else {
							musicon = true;
							e.type = SDL_MOUSEBUTTONUP;
							Mix_PlayMusic(daddy, -1);
						}

					}

					SDL_Rect submarine0 = { 780,130,160,105 };
					SDL_RenderCopy(gRenderer, Boss[0], NULL, &submarine0);

					SDL_Rect submarine1 = { 1055,130,160,105 };
					SDL_RenderCopy(gRenderer, Boss[1], NULL, &submarine1);

					SDL_Rect submarine2 = { 780,310,160,105 };
					SDL_RenderCopy(gRenderer, Boss[2], NULL, &submarine2);

					SDL_Rect submarine3 = { 1055,310,160,105 };
					SDL_RenderCopy(gRenderer, Boss[3], NULL, &submarine3);


					if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button && x >= 780 && x <= 940 && y >= 130 && y <= 235) boss_type = 0;
					if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button && x >= 1055 && x <= 1215 && y >= 130 && y <= 235) boss_type = 1;
					if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button && x >= 780 && x <= 940 && y >= 310 && y <= 415) boss_type = 2;
					if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button && x >= 1055 && x <= 1215 && y >= 310 && y <= 415) boss_type = 3;





					sound.Free();
					sound.SetColor(TextObject::RED_TEXT);
					string strMark1("SOUND:");
					sound.SetText(strMark1);
					sound.LoadFromRenderText(font_tong, gRenderer);
					sound.RenderText(gRenderer, 390, 200);

					Music.Free();
					Music.SetColor(TextObject::RED_TEXT);
					string strMark2("MUSIC:");
					Music.SetText(strMark2);
					Music.LoadFromRenderText(font_tong, gRenderer);
					Music.RenderText(gRenderer, 390, 300);

					SDL_Rect return_item = { 40,50,100,80 };
					SDL_RenderCopy(gRenderer, arrow, NULL, &return_item);
					if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT && x >= 40 && x <= 140 && y >= 50 && y <= 120)
					{
						click = true;
						start = 0;
					}
					else if (e.type == SDL_MOUSEBUTTONUP) {
						click = false;
					}

					SDL_RenderPresent(gRenderer);
				}

				if (start == 1 && click == false)
				{
					/*click = true;*/
					SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
					SDL_RenderClear(gRenderer);



					SDL_Rect type = { 0,0,SCREEN_WIDTH,SCREEN_HEIGHT };
					SDL_RenderClear(gRenderer);
					SDL_RenderCopy(gRenderer, Type, NULL, &type);
					SDL_Rect type1 = { 72,248,266,173 };
					SDL_RenderCopy(gRenderer, Type1, NULL, &type1);
					SDL_Rect type2 = { 493,251,266,173 };
					SDL_RenderCopy(gRenderer, Type2, NULL, &type2);
					SDL_Rect type3 = { 908,249,266,173 };
					SDL_RenderCopy(gRenderer, Type3, NULL, &type3);

					if (e.type == SDL_MOUSEBUTTONDOWN && x >= 48 && x <= 343 && y >= 239 && y <= 431)
					{
						click = true;
						typegame = 1;
						start = 2;
						if (musicon == true) Mix_PlayMusic(music, -1);

					}
					else if (e.type == SDL_MOUSEBUTTONUP) click = false;
					if (e.type == SDL_MOUSEBUTTONDOWN && x >= 478 && x <= 766 && y >= 237 && y <= 428)
					{
						click = true;
						typegame = 2;
						start = 2;
						if (musicon == true) Mix_PlayMusic(music, -1);
					}
					else if (e.type == SDL_MOUSEBUTTONUP) click = false;
					if (e.type == SDL_MOUSEBUTTONDOWN && x >= 910 && x <= 1172 && y >= 247 && y <= 412)
					{
						click = true;
						typegame = 3;
						start = 2;
						if (musicon == true) Mix_PlayMusic(music, -1);
					}
					else if (e.type == SDL_MOUSEBUTTONUP) click = false;
					SDL_Rect return_item = { 40,50,100,80 };
					SDL_RenderCopy(gRenderer, arrow, NULL, &return_item);
					if (SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT && x >= 40 && x <= 140 && y >= 50 && y <= 120)
					{
						click = true;
						start = 0;
						checktype = false;
					}
					else if (e.type == SDL_MOUSEBUTTONUP) click = false;
					SDL_RenderPresent(gRenderer);

				}
				if (pause == true)
				{

					SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
					SDL_RenderClear(gRenderer);



					SDL_Rect pausegame = { 0,0,SCREEN_WIDTH,SCREEN_HEIGHT };
					SDL_RenderClear(gRenderer);
					SDL_RenderCopy(gRenderer, Pause, NULL, &pausegame);
					SDL_RenderPresent(gRenderer);
				}

				if (typegame == 1 && e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_RIGHT) { check_until = true; }

				if (start == 2) {
					if (typegame == 1)
					{
						if (pause == false)
						{

							if (e.motion.xrel > 0) {
								fliptype = SDL_FLIP_NONE;
							}
							if (e.motion.xrel < 0) {
								fliptype = SDL_FLIP_HORIZONTAL;
							}
							/*std::cout << dem;*/


							ca_nho.Free();
							ca_nho.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca_nho = std::to_string(dem_ca_nho);
							string strMark1(":");
							strMark1 += val_str_mark_ca_nho;

							ca_vua.Free();
							ca_vua.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca_vua = std::to_string(dem_ca_vua);
							string strMark2(":");
							strMark2 += val_str_mark_ca_vua;

							ca_to.Free();
							ca_to.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca_to = std::to_string(dem_ca_to);
							string strMark3(":");
							strMark3 += val_str_mark_ca_to;

							score.Free();
							score.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca = std::to_string(dem);
							string diem("RESULT:");
							diem += val_str_mark_ca;

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

							SDL_Rect Board = { 0,0,1280,100 };
							SDL_RenderCopy(gRenderer, board, NULL, &Board);

							SDL_Rect result = { 720,10,300,80 };
							SDL_RenderCopy(gRenderer, wood, NULL, &result);

							SDL_Rect Pause = { 1125,17,106,70 };
							SDL_RenderCopy(gRenderer, pausegame, NULL, &Pause);

							SDL_Rect IconSmall = { 30,30,40,40 };
							SDL_RenderCopy(gRenderer, iconsmall, NULL, &IconSmall);

							SDL_Rect IconMid = { SCREEN_WIDTH / 2 - 400,25,50,50 };
							SDL_RenderCopy(gRenderer, iconmid, NULL, &IconMid);

							SDL_Rect IconBig = { SCREEN_WIDTH - 800,25,60,60 };
							SDL_RenderCopy(gRenderer, iconbig, NULL, &IconBig);

							ca_nho.SetText(strMark1);
							ca_nho.LoadFromRenderText(font_tong, gRenderer);
							ca_nho.RenderText(gRenderer, 80, 10);

							ca_vua.SetText(strMark2);
							ca_vua.LoadFromRenderText(font_tong, gRenderer);
							ca_vua.RenderText(gRenderer, SCREEN_WIDTH / 2 - 350, 10);

							ca_to.SetText(strMark3);
							ca_to.LoadFromRenderText(font_tong, gRenderer);
							ca_to.RenderText(gRenderer, SCREEN_WIDTH - 740, 10);

							score.SetText(diem);
							score.LoadFromRenderText(font_tong, gRenderer);
							score.RenderText(gRenderer, 748, 10);

							int toado_x = x - size_x / 2;
							int toado_y = y - size_y / 2;

							if (check_until == true) {
								SDL_Rect ULTI;
								ULTI = { toado_x,  toado_y , size_x += 4,size_y += 4 };
								SDL_RenderCopy(gRenderer, ulti, NULL, &ULTI);
							}

							for (int i = 0; i < (int)muoi.size(); i++) {
								if (abs(toado_x - muoi[i].xk) <= size_x && abs(toado_y - muoi[i].yk) <= size_y && muoi[i].test_alive == 1) {
									muoi[i].test_alive = 0;
									muoi[i].xk = -100;
									muoi[i].yk = -100;
								}
							}
							for (int i = 0; i < (int)muoito.size(); i++) {
								if (abs(toado_x - muoito[i].xk) <= size_x && abs(toado_y - muoito[i].yk) <= size_y && muoito[i].test_alive == 1) {
									muoito[i].test_alive = 0;
									muoito[i].xk = -100;
									muoito[i].yk = -100;
								}
							}
							for (int i = 0; i < (int)bigfish.size(); i++) {
								if (abs(toado_x - bigfish[i].xk) <= size_x && abs(toado_y - bigfish[i].yk) <= size_y && bigfish[i].test_alive == 1) {
									bigfish[i].test_alive = 0;
									bigfish[i].xk = -100;
									bigfish[i].yk = -100;
								}
							}


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
								if (muoi[i].test_alive == 1 && alive == true)
								{
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
									if (abs(muoi[i].yk - y) < 30 && abs(muoi[i].xk - x) < 50)
									{
										testquaydau[i] = 1;
									}
									if (thu2[i] == 1 && testquaydau[i] == 1)
									{
										rectmuoi[i] = { muoi[i].xk -= 3,muoi[i].yk += (rand() % 3) * ((rand() % 2 == 0) ? -1 : 1), 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_NONE);


									}
									else if (thu2[i] == 0 && testquaydau[i] == 1)
									{
										rectmuoi[i] = { muoi[i].xk += 3, muoi[i].yk += (rand() % 3) * ((rand() % 2 == 0) ? -1 : 1), 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

									}
									else if (thu2[i] == 0)
									{
										rectmuoi[i] = { muoi[i].xk -= 2 * (rand() % 3) , muoi[i].yk += canhodichuyen[i].dichuyen, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_NONE);
										if (muoi[i].trongmanhinh == false)
										{
											rectmuoi[i] = { muoi[i].xk -= 2 * (rand() % 3) , muoi[i].yk += muoi[i].ykdaptuong, 80, 80 };
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

								if (muoito[i].test_alive == 1 && alive == true)
								{
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
									if (thucato[i] == 1 && ca_to_quay_dau[i] == 1 && dem >= 15)
									{
										Rectcato[i] = { muoito[i].xk -= Mid_Fish[i].ca_vua_di_chuyen, muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_NONE);


									}
									else if (thucato[i] == 0 && ca_to_quay_dau[i] == 1 && dem >= 15)
									{
										Rectcato[i] = { muoito[i].xk += Mid_Fish[i].ca_vua_di_chuyen, muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_HORIZONTAL);


									}
									else if (thucato[i] == 0)
									{
										Rectcato[i] = { muoito[i].xk -= Mid_Fish[i].ca_vua_di_chuyen, muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_NONE);
									}
									else if (thucato[i] == 1)
									{
										Rectcato[i] = { muoito[i].xk += Mid_Fish[i].ca_vua_di_chuyen,muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

									}
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

								if (bigfish[i].test_alive == 1 && alive == true)
								{

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
									if (thubigfish[i] == 1 && bigfish_quay_dau[i] == 1 && dem >= 30)
									{
										Rectbigfish[i] = { bigfish[i].xk -= Big_Fish[i].ca_to_di_chuyen, bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_NONE);

									}
									else if (thubigfish[i] == 0 && bigfish_quay_dau[i] == 1 && dem >= 30)
									{
										Rectbigfish[i] = { bigfish[i].xk += Big_Fish[i].ca_to_di_chuyen, bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

									}
									else if (thubigfish[i] == 0)
									{
										Rectbigfish[i] = { bigfish[i].xk -= Big_Fish[i].ca_to_di_chuyen, bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_NONE);

									}
									else if (thubigfish[i] == 1)
									{
										Rectbigfish[i] = { bigfish[i].xk += Big_Fish[i].ca_to_di_chuyen,bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_HORIZONTAL);
									}
								}

							}

							float delta_x;
							float delta_y;
							/*float angle;*/


							SDL_Rect boss;
							if (dem >= 15)
							{
								if (x2 <= 0) {

									thubossquaydau = false;

								}
								if (x2 >= 1280) {

									thubossquaydau = true;
								}
								if (thubossquaydau == false) {
									boss = { x2 += 5, y2 += 0, 200, 200 };
									SDL_RenderCopyEx(gRenderer, Boss[boss_type], NULL, &boss, NULL, NULL, SDL_FLIP_NONE);
								}
								if (thubossquaydau == true) {
									boss = { x2 -= 5, y2 -= 0, 200, 200 };
									SDL_RenderCopyEx(gRenderer, Boss[boss_type], NULL, &boss, NULL, NULL, SDL_FLIP_HORIZONTAL);
								}
								if (daban == false) {
									delta_x = X - bullet.x;
									delta_y = Y - bullet.y;
									angle = atan2(delta_y, delta_x);

								}
								daban = true;

								SDL_Rect banbullet;
								banbullet = { bullet.x += 10 * cos(angle), bullet.y += 10 * sin(angle), 30,30 };
								SDL_RenderCopy(gRenderer, Bullet1, NULL, &banbullet);
								if (bullet.y >= 720 || bullet.y <= 0 || bullet.x >= 1280 || bullet.x <= 0)
								{
									bullet.rebullet();
									bullet.x = x2 + 100;
									bullet.y = y2 + 100;
									daban = false;
								}
								if (win == false)
									if (abs(bullet.x - x) <= 30 && abs(bullet.y - y) <= 30 && alive == true) {
										alive = false;
										lose = false;
										daban = true;
										cout << "biban" << endl;
									}
								for (int i = 0; i < (int)muoi.size(); i++) {
									if ((int)abs(bullet.x - muoi[i].xk) <= 20 && (int)abs(bullet.y - muoi[i].yk) <= 20 && muoi[i].test_alive == 1 && alive == true)
									{

										/*SDL_DestroyTexture(muoi[i].Texmuoi);
										muoi[i].xk = -100;
										muoi[i].yk = -100;*/
										muoi[i].test_alive = 0;
										if (win == false || lose == true) Mix_PlayChannel(-1, bang, 1);
										muoi[i].free();
										bullet.rebullet();
										bullet.x = x2 + 100;
										bullet.y = y2 + 100;
										daban = false;

									}
								}
								for (int i = 0; i < 10; i++) {
									if ((int)abs(bullet.x - muoito[i].xk) <= 50 && (int)abs(bullet.y - muoito[i].yk) <= 50 && muoito[i].test_alive == 1 && alive == true)
									{
										/*SDL_DestroyTexture(muoito[i].Texmuoi);
										muoito[i].xk = -100;
										muoito[i].yk = -100;*/
										muoito[i].test_alive = 0;
										if (win == false || lose == true) Mix_PlayChannel(-1, bang, 1);
										muoito[i].free();
										bullet.rebullet();
										bullet.x = x2 + 100;
										bullet.y = y2 + 100;
										daban = false;
									}
								}
								for (int i = 0; i < (int)bigfish.size(); i++) {
									if ((int)abs(bullet.x - bigfish[i].xk) <= 50 && (int)abs(bullet.y - bigfish[i].yk) <= 50 && bigfish[i].test_alive == 1 && alive == true)
									{
										/*SDL_DestroyTexture(bigfish[i].Texmuoi);
										bigfish[i].xk = -100;
										bigfish[i].yk = -100;*/
										bigfish[i].test_alive = 0;
										if (win == false || lose == true) Mix_PlayChannel(-1, bang, 1);
										bigfish[i].free();
										bullet.rebullet();
										bullet.x = x2 + 100;
										bullet.y = y2 + 100;
										daban = false;

									}
								}
								if (abs(toado_x - bullet.x) <= size_x - 20 && abs(toado_y - bullet.y) <= size_y - 20) {
									bullet.rebullet();
									bullet.x = x2 + 100;
									bullet.y = y2 + 100;
									daban = false;
								}
								if (abs(toado_x - x2) <= size_x - 20 && abs(toado_y - y2) <= size_y - 20) { win = true; daban = true; }
							}

							if (alive == true)
							{

								SDL_Rect rect[19];

								for (int i = 0; i < 19; i++) {
									rect[i] = { i * 115  ,0  ,114,114 };


								}

								SDL_Rect rect4;
								if (dem < 15)
								{
									rect4 = { x - 50,y - 50,100,100 };
								}
								if (dem >= 15) rect4 = { x - 100,y - 100,200,200 };
								if (dem >= 30) rect4 = { x - 150,y - 150,300,300 };

								SDL_RenderCopyEx(gRenderer, gTexture1, &rect[i], &rect4, 0, NULL, fliptype);
								j = (j + 1) % 11;
								i = (i + j / 10) % 20;
								if (i >= 19)
								{
									i = 0;
								}

							}

							for (int i = 0; i < (int)muoi.size(); i++) {
								if ((int)abs(x - muoi[i].xk) <= 20 && (int)abs(y - muoi[i].yk) <= 20 && muoi[i].test_alive == 1 && alive == true)
								{

									/*SDL_DestroyTexture(muoi[i].Texmuoi);
									muoi[i].xk = -100;
									muoi[i].yk = -100;*/
									muoi[i].test_alive = 0;
									muoi[i].free();

									if (win == false || lose == true) if (soundon == true)Mix_PlayChannel(-1, eatlevel1, 1);
									dem_ca_nho += 1;
									dem += 1;
								}
							}

							for (int i = 0; i < 10; i++) {
								if ((int)abs(x - muoito[i].xk) <= 50 && (int)abs(y - muoito[i].yk) <= 50 && dem >= 15 && muoito[i].test_alive == 1 && alive == true)
								{
									/*SDL_DestroyTexture(muoito[i].Texmuoi);
									muoito[i].xk = -100;
									muoito[i].yk = -100;*/
									muoito[i].test_alive = 0;
									muoito[i].free();

									if (win == false || lose == true) if (soundon == true) Mix_PlayChannel(-1, eatlevel2, 1);
									dem_ca_vua += 1;
									dem += 2;
								}
							}

							for (int i = 0; i < (int)muoito.size(); i++)
							{
								if (abs(x - muoito[i].xk) <= 20 && abs(y - muoito[i].yk) <= 20 && dem < 15)
								{
									alive = false;
									lose = false;
								}
							}
							for (int i = 0; i < (int)bigfish.size(); i++) {
								if ((int)abs(x - bigfish[i].xk) <= 50 && (int)abs(y - bigfish[i].yk) <= 50 && dem >= 30 && bigfish[i].test_alive == 1 && alive == true)
								{
									/*SDL_DestroyTexture(bigfish[i].Texmuoi);
									bigfish[i].xk = -100;
									bigfish[i].yk = -100;*/
									bigfish[i].test_alive = 0;
									bigfish[i].free();

									if (win == false || lose == true) if (soundon == true) Mix_PlayChannel(-1, eatlevel3, 1);

									dem_ca_to += 1;
									dem += 3;
								}
							}

							for (int i = 0; i < 5; i++)
							{
								if (abs(x - bigfish[i].xk) <= 20 && abs(y - bigfish[i].yk) <= 20 && dem < 30) {
									alive = false;
									lose = false;
								}
							}

							for (int i = 0; i < (int)bigfish.size(); i++)
							{
								for (int j = 0; j < (int)muoito.size(); j++)
								{
									//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
									if (abs(bigfish[i].xk - muoito[j].xk) <= 50 && abs(bigfish[i].yk - muoito[j].yk) <= 50 && muoito[j].test_alive == 1)
									{
										/*SDL_DestroyTexture(muoito[j].Texmuoi);
										muoito[j].xk = -100;
										muoito[j].yk = -100;*/
										muoito[j].test_alive = 0;
										muoito[j].free();
									}
								}
							}
							for (int i = 0; i < (int)bigfish.size(); i++)
							{
								for (int j = 0; j < (int)muoi.size(); j++)
								{
									//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
									if (abs(bigfish[i].xk - muoi[j].xk) <= 20 && abs(bigfish[i].yk - muoi[j].yk) <= 20 && muoi[j].test_alive == 1)
									{
										/*SDL_DestroyTexture(muoi[j].Texmuoi);
										muoi[j].xk = -100;
										muoi[j].yk = -100;*/
										muoi[j].test_alive = 0;
										muoi[j].free();
									}
								}
							}
							for (int i = 0; i < (int)muoito.size(); i++)
							{
								for (int j = 0; j < (int)muoi.size(); j++)
								{
									//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
									if (abs(muoito[i].xk - muoi[j].xk) <= 20 && abs(muoito[i].yk - muoi[j].yk) <= 20 && muoi[j].test_alive == 1)
									{
										/*SDL_DestroyTexture(muoi[j].Texmuoi);
										muoi[j].xk = -100;
										muoi[j].yk = -100;*/
										muoi[j].test_alive = 0;
										muoi[j].free();
									}
								}
							}



							SDL_Delay(20);
							if (win == true) {
								SDL_Rect inwin = { 0,00,SCREEN_WIDTH ,SCREEN_HEIGHT };
								SDL_RenderCopy(gRenderer, Win, NULL, &inwin);
							}
							if (lose == false)
							{
								SDL_Rect inlose = { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };
								SDL_RenderCopy(gRenderer, Lose, NULL, &inlose);
								alive = false;
							}


							SDL_RenderPresent(gRenderer);
						}
					}
					if (typegame == 2)
					{
						if (pause == false)
						{
							ca_nho.Free();
							ca_nho.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca_nho = std::to_string(dem_ca_nho);
							string strMark1(":");
							strMark1 += val_str_mark_ca_nho;

							ca_vua.Free();
							ca_vua.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca_vua = std::to_string(dem_ca_vua);
							string strMark2(":");
							strMark2 += val_str_mark_ca_vua;

							ca_to.Free();
							ca_to.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca_to = std::to_string(dem_ca_to);
							string strMark3(":");
							strMark3 += val_str_mark_ca_to;

							score.Free();
							score.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca = std::to_string(dem);
							string diem("RESULT:");
							diem += val_str_mark_ca;

							dan_con_lai.Free();
							dan_con_lai.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_dan = std::to_string(BULLET);
							string Bullet("BULLET:");
							Bullet += val_str_mark_dan;

							SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
							SDL_RenderClear(gRenderer);



							SDL_Rect topLeftViewport;
							topLeftViewport.x = 0;
							topLeftViewport.y = 0;
							topLeftViewport.w = SCREEN_WIDTH;
							topLeftViewport.h = SCREEN_HEIGHT;
							SDL_RenderSetViewport(gRenderer, &topLeftViewport);




							SDL_RenderClear(gRenderer);
							SDL_RenderCopy(gRenderer, gTexture2, NULL, NULL);

							SDL_Rect Board = { 0,0,1280,100 };
							SDL_RenderCopy(gRenderer, board, NULL, &Board);

							SDL_Rect result = { 750,10,300,80 };
							SDL_RenderCopy(gRenderer, wood, NULL, &result);

							SDL_Rect sap_thua = { 440,10,300,80 };
							SDL_RenderCopy(gRenderer, wood, NULL, &sap_thua);

							SDL_Rect Pause = { 1125,17,106,70 };
							SDL_RenderCopy(gRenderer, pausegame, NULL, &Pause);

							SDL_Rect IconSmall = { 30,30,40,40 };
							SDL_RenderCopy(gRenderer, iconsmall, NULL, &IconSmall);

							SDL_Rect IconMid = { SCREEN_WIDTH / 2 - 480,25,50,50 };
							SDL_RenderCopy(gRenderer, iconmid, NULL, &IconMid);

							SDL_Rect IconBig = { SCREEN_WIDTH - 990,20,60,60 };
							SDL_RenderCopy(gRenderer, iconbig, NULL, &IconBig);

							ca_nho.SetText(strMark1);
							ca_nho.LoadFromRenderText(font_tong, gRenderer);
							ca_nho.RenderText(gRenderer, 80, 10);

							ca_vua.SetText(strMark2);
							ca_vua.LoadFromRenderText(font_tong, gRenderer);
							ca_vua.RenderText(gRenderer, SCREEN_WIDTH / 2 - 430, 10);

							ca_to.SetText(strMark3);
							ca_to.LoadFromRenderText(font_tong, gRenderer);
							ca_to.RenderText(gRenderer, SCREEN_WIDTH - 925, 10);

							score.SetText(diem);
							score.LoadFromRenderText(font_tong, gRenderer);
							score.RenderText(gRenderer, 768, 10);

							dan_con_lai.SetText(Bullet);
							dan_con_lai.LoadFromRenderText(font_tong, gRenderer);
							dan_con_lai.RenderText(gRenderer, 460, 10);

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
								if (muoi[i].test_alive == 1 && alive == true)
								{
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

									if (thu2[i] == 0)
									{
										rectmuoi[i] = { muoi[i].xk -= (rand() % 3) , muoi[i].yk += canhodichuyen[i].dichuyen, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_NONE);
										if (muoi[i].trongmanhinh == false)
										{
											rectmuoi[i] = { muoi[i].xk -= (rand() % 3) , muoi[i].yk += muoi[i].ykdaptuong, 80, 80 };
											SDL_RenderCopyEx(gRenderer, muoi[i].Texmuoi, &ca_nho[k1], &rectmuoi[i], NULL, NULL, SDL_FLIP_NONE);

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

										}

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

								if (muoito[i].test_alive == 1 && alive == true)
								{
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

									if (thucato[i] == 0)
									{
										Rectcato[i] = { muoito[i].xk -= Mid_Fish[i].ca_vua_di_chuyen, muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_NONE);
									}
									else if (thucato[i] == 1)
									{
										Rectcato[i] = { muoito[i].xk += Mid_Fish[i].ca_vua_di_chuyen,muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

									}
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

								if (bigfish[i].test_alive == 1 && alive == true)
								{

									if (bigfish[i].xk == 1280)
									{

										thubigfish[i] = 0;

									}
									else if (bigfish[i].xk <= 0)
									{

										thubigfish[i] = 1;

									}


									if (thubigfish[i] == 0)
									{
										Rectbigfish[i] = { bigfish[i].xk -= Big_Fish[i].ca_to_di_chuyen, bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_NONE);

									}
									else if (thubigfish[i] == 1)
									{
										Rectbigfish[i] = { bigfish[i].xk += Big_Fish[i].ca_to_di_chuyen,bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_HORIZONTAL);
									}
								}

							}
							float delta_x;
							float delta_y;


							SDL_Rect boss;

							if (x2 <= 0) {

								thubossquaydau = false;

							}
							if (x2 >= 1150) {

								thubossquaydau = true;
							}
							if (thubossquaydau == false) {
								boss = { x2 += 5, y2 += 0, 200, 200 };
								SDL_RenderCopyEx(gRenderer, Boss[boss_type], NULL, &boss, NULL, NULL, SDL_FLIP_NONE);
							}
							if (thubossquaydau == true) {
								boss = { x2 -= 5, y2 -= 0, 200, 200 };
								SDL_RenderCopyEx(gRenderer, Boss[boss_type], NULL, &boss, NULL, NULL, SDL_FLIP_HORIZONTAL);
							}
							if (daban == false) {
								delta_x = X - bullet.x;
								delta_y = Y - bullet.y;
								angle = atan2(delta_y, delta_x);

							}
							daban = true;

							SDL_Rect banbullet;
							banbullet = { bullet.x += 10 * cos(angle), bullet.y += 10 * sin(angle), 30,30 };
							SDL_RenderCopy(gRenderer, Bullet1, NULL, &banbullet);
							if (bullet.y >= 720 || bullet.y <= 0 || bullet.x >= 1280 || bullet.x <= 0)
							{
								BULLET -= 1;
								bullet.rebullet();
								bullet.x = x2 + 100;
								bullet.y = y2 + 100;
								daban = false;
							}






							for (int i = 0; i < (int)muoi.size(); i++) {
								if ((int)abs(bullet.x - muoi[i].xk) <= 20 && (int)abs(bullet.y - muoi[i].yk) <= 20 && muoi[i].test_alive == 1 && alive == true)
								{

									/*SDL_DestroyTexture(muoi[i].Texmuoi);
									muoi[i].xk = -100;
									muoi[i].yk = -100;*/
									muoi[i].test_alive = 0;
									if (win == false) Mix_PlayChannel(-1, bang, 1);
									muoi[i].free();
									bullet.rebullet();
									bullet.x = x2 + 100;
									bullet.y = y2 + 100;
									dem_ca_nho += 1;
									dem += 1;
									BULLET -= 1;
									daban = false;

								}
							}

							for (int i = 0; i < 10; i++) {
								if ((int)abs(bullet.x - muoito[i].xk) <= 50 && (int)abs(bullet.y - muoito[i].yk) <= 50 && muoito[i].test_alive == 1 && alive == true)
								{
									/*SDL_DestroyTexture(muoito[i].Texmuoi);
									muoito[i].xk = -100;
									muoito[i].yk = -100;*/
									muoito[i].test_alive = 0;
									if (win == false) Mix_PlayChannel(-1, bang, 1);
									muoito[i].free();
									bullet.rebullet();
									bullet.x = x2 + 100;
									bullet.y = y2 + 100;
									dem_ca_vua += 1;
									dem += 2;
									BULLET -= 1;
									daban = false;
								}
							}


							for (int i = 0; i < (int)bigfish.size(); i++) {
								if ((int)abs(bullet.x - bigfish[i].xk) <= 50 && (int)abs(bullet.y - bigfish[i].yk) <= 50 && bigfish[i].test_alive == 1 && alive == true)
								{
									/*SDL_DestroyTexture(bigfish[i].Texmuoi);
									bigfish[i].xk = -100;
									bigfish[i].yk = -100;*/
									bigfish[i].test_alive = 0;

									if (win == false) Mix_PlayChannel(-1, bang, 1);

									bigfish[i].free();
									bullet.rebullet();
									bullet.x = x2 + 100;
									bullet.y = y2 + 100;
									dem_ca_to += 1;
									dem += 3;
									daban = false;

								}
							}


							for (int i = 0; i < (int)bigfish.size(); i++)
							{
								for (int j = 0; j < (int)muoito.size(); j++)
								{
									//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
									if (abs(bigfish[i].xk - muoito[j].xk) <= 50 && abs(bigfish[i].yk - muoito[j].yk) <= 50 && muoito[j].test_alive == 1)
									{
										/*SDL_DestroyTexture(muoito[j].Texmuoi);
										muoito[j].xk = -100;
										muoito[j].yk = -100;*/
										muoito[j].test_alive = 0;
										muoito[j].free();
									}
								}
							}
							for (int i = 0; i < (int)bigfish.size(); i++)
							{
								for (int j = 0; j < (int)muoi.size(); j++)
								{
									//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
									if (abs(bigfish[i].xk - muoi[j].xk) <= 20 && abs(bigfish[i].yk - muoi[j].yk) <= 20 && muoi[j].test_alive == 1)
									{
										/*SDL_DestroyTexture(muoi[j].Texmuoi);
										muoi[j].xk = -100;
										muoi[j].yk = -100;*/
										muoi[j].test_alive = 0;
										muoi[j].free();
									}
								}
							}
							for (int i = 0; i < (int)muoito.size(); i++)
							{
								for (int j = 0; j < (int)muoi.size(); j++)
								{
									//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
									if (abs(muoito[i].xk - muoi[j].xk) <= 20 && abs(muoito[i].yk - muoi[j].yk) <= 20 && muoi[j].test_alive == 1)
									{
										/*SDL_DestroyTexture(muoi[j].Texmuoi);
										muoi[j].xk = -100;
										muoi[j].yk = -100;*/
										muoi[j].test_alive = 0;
										muoi[j].free();
									}
								}
							}



							SDL_Delay(20);
							if (dem >= 100)
							{
								win = true;

							}
							if (win == true) {
								SDL_Rect inwin = { 0,00,SCREEN_WIDTH ,SCREEN_HEIGHT };
								SDL_RenderCopy(gRenderer, Win, NULL, &inwin);
								lose = true;
							}
							if (BULLET <= 0 && dem < 100) {
								lose = false;
								win = false;
							}
							if (lose == false)
							{
								SDL_Rect inlose = { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };
								SDL_RenderCopy(gRenderer, Lose, NULL, &inlose);
								alive = false;
							}


							SDL_RenderPresent(gRenderer);
						}

					}
					if (typegame == 3) {
						if (pause == false)
						{

							if (e.motion.xrel > 0) {
								fliptype = SDL_FLIP_NONE;
							}
							if (e.motion.xrel < 0) {
								fliptype = SDL_FLIP_HORIZONTAL;
							}
							/*std::cout << dem;*/









							ca_nho.Free();
							ca_nho.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca_nho = std::to_string(dem_ca_nho);
							string strMark1(":");
							strMark1 += val_str_mark_ca_nho;

							ca_vua.Free();
							ca_vua.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca_vua = std::to_string(dem_ca_vua);
							string strMark2(":");
							strMark2 += val_str_mark_ca_vua;

							ca_to.Free();
							ca_to.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca_to = std::to_string(dem_ca_to);
							string strMark3(":");
							strMark3 += val_str_mark_ca_to;

							score.Free();
							score.SetColor(TextObject::RED_TEXT);
							std::string val_str_mark_ca = std::to_string(dem);
							string diem("RESULT:");
							diem += val_str_mark_ca;

							SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
							SDL_RenderClear(gRenderer);



							SDL_Rect topLeftViewport;
							topLeftViewport.x = 0;
							topLeftViewport.y = 0;
							topLeftViewport.w = SCREEN_WIDTH;
							topLeftViewport.h = SCREEN_HEIGHT;
							SDL_RenderSetViewport(gRenderer, &topLeftViewport);




							SDL_RenderClear(gRenderer);
							SDL_RenderCopy(gRenderer, gTexture3, NULL, NULL);

							SDL_Rect Board = { 0,0,1280,100 };
							SDL_RenderCopy(gRenderer, board, NULL, &Board);

							SDL_Rect result = { 720,10,300,80 };
							SDL_RenderCopy(gRenderer, wood, NULL, &result);

							SDL_Rect Pause = { 1125,17,106,70 };
							SDL_RenderCopy(gRenderer, pausegame, NULL, &Pause);

							SDL_Rect IconSmall = { 30,30,40,40 };
							SDL_RenderCopy(gRenderer, iconsmall, NULL, &IconSmall);

							SDL_Rect IconMid = { SCREEN_WIDTH / 2 - 400,25,50,50 };
							SDL_RenderCopy(gRenderer, iconmid, NULL, &IconMid);

							SDL_Rect IconBig = { SCREEN_WIDTH - 800,25,60,60 };
							SDL_RenderCopy(gRenderer, iconbig, NULL, &IconBig);

							ca_nho.SetText(strMark1);
							ca_nho.LoadFromRenderText(font_tong, gRenderer);
							ca_nho.RenderText(gRenderer, 80, 10);

							ca_vua.SetText(strMark2);
							ca_vua.LoadFromRenderText(font_tong, gRenderer);
							ca_vua.RenderText(gRenderer, SCREEN_WIDTH / 2 - 350, 10);

							ca_to.SetText(strMark3);
							ca_to.LoadFromRenderText(font_tong, gRenderer);
							ca_to.RenderText(gRenderer, SCREEN_WIDTH - 740, 10);

							score.SetText(diem);
							score.LoadFromRenderText(font_tong, gRenderer);
							score.RenderText(gRenderer, 748, 10);




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
								if (muoi[i].test_alive == 1 && alive == true)
								{
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

								if (muoito[i].test_alive == 1 && alive == true)
								{
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
										Rectcato[i] = { muoito[i].xk -= Mid_Fish[i].ca_vua_di_chuyen, muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_NONE);


									}
									else if (thucato[i] == 0 && ca_to_quay_dau[i] == 1 && dem >= 15)
									{
										Rectcato[i] = { muoito[i].xk += Mid_Fish[i].ca_vua_di_chuyen, muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_HORIZONTAL);


									}
									else if (thucato[i] == 0)
									{
										Rectcato[i] = { muoito[i].xk -= Mid_Fish[i].ca_vua_di_chuyen, muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_NONE);
									}
									else if (thucato[i] == 1)
									{
										Rectcato[i] = { muoito[i].xk += Mid_Fish[i].ca_vua_di_chuyen,muoito[i].yk += 0, 80, 80 };
										SDL_RenderCopyEx(gRenderer, muoito[i].Texmuoi, &ca_vua[k], &Rectcato[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

									}
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

								if (bigfish[i].test_alive == 1 && alive == true)
								{

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
									if (thubigfish[i] == 1 && bigfish_quay_dau[i] == 1 && dem >= 30)
									{
										Rectbigfish[i] = { bigfish[i].xk -= Big_Fish[i].ca_to_di_chuyen, bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_NONE);

									}
									else if (thubigfish[i] == 0 && bigfish_quay_dau[i] == 1 && dem >= 20)
									{
										Rectbigfish[i] = { bigfish[i].xk += Big_Fish[i].ca_to_di_chuyen, bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_HORIZONTAL);

									}
									else if (thubigfish[i] == 0)
									{
										Rectbigfish[i] = { bigfish[i].xk -= Big_Fish[i].ca_to_di_chuyen, bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_NONE);

									}
									else if (thubigfish[i] == 1)
									{
										Rectbigfish[i] = { bigfish[i].xk += Big_Fish[i].ca_to_di_chuyen,bigfish[i].yk += 0, 150, 150 };
										SDL_RenderCopyEx(gRenderer, bigfish[i].Texmuoi, &ca_to[k2], &Rectbigfish[i], NULL, NULL, SDL_FLIP_HORIZONTAL);
									}
								}

							}



							if (alive == true)
							{

								SDL_Rect rect[19];

								for (int i = 0; i < 19; i++) {
									rect[i] = { i * 115  ,0  ,114,114 };

								}
								SDL_GetMouseState((&x), (&y));

								SDL_Rect rect4;
								if (dem < 15)
								{
									rect4 = { x - 50,y - 50,100,100 };
								}
								if (dem >= 15) rect4 = { x - 100,y - 100,200,200 };
								if (dem >= 30) rect4 = { x - 150,y - 150,300,300 };

								SDL_RenderCopyEx(gRenderer, gTexture1, &rect[i], &rect4, 0, NULL, fliptype);
								j = (j + 1) % 11;
								i = (i + j / 10) % 20;
								if (i >= 19)
								{
									i = 0;
								}

							}
							for (int i = 0; i < (int)muoi.size(); i++) {
								if ((int)abs(x - muoi[i].xk) <= 20 && (int)abs(y - muoi[i].yk) <= 20 && muoi[i].test_alive == 1 && alive == true)
								{

									/*SDL_DestroyTexture(muoi[i].Texmuoi);
									muoi[i].xk = -100;
									muoi[i].yk = -100;*/
									muoi[i].test_alive = 0;
									muoi[i].free();

									if (dem < 100) if (soundon == true) Mix_PlayChannel(-1, eatlevel1, 1);
									dem_ca_nho += 1;
									dem += 1;
								}
							}
							for (int i = 0; i < 10; i++) {
								if ((int)abs(x - muoito[i].xk) <= 50 && (int)abs(y - muoito[i].yk) <= 50 && dem >= 15 && muoito[i].test_alive == 1 && alive == true)
								{
									/*SDL_DestroyTexture(muoito[i].Texmuoi);
									muoito[i].xk = -100;
									muoito[i].yk = -100;*/
									muoito[i].test_alive = 0;
									muoito[i].free();

									if (dem < 100) if (soundon == true)	Mix_PlayChannel(-1, eatlevel2, 1);
									dem_ca_vua += 1;
									dem += 2;
								}
							}
							for (int i = 0; i < (int)muoito.size(); i++)
							{
								if (abs(x - muoito[i].xk) <= 30 && abs(y - muoito[i].yk) <= 30 && dem < 15)
								{
									alive = false;
									lose = false;
								}
							}
							for (int i = 0; i < (int)bigfish.size(); i++) {
								if ((int)abs(x - bigfish[i].xk) <= 50 && (int)abs(y - bigfish[i].yk) <= 50 && dem >= 30 && bigfish[i].test_alive == 1 && alive == true)
								{
									/*SDL_DestroyTexture(bigfish[i].Texmuoi);
									bigfish[i].xk = -100;
									bigfish[i].yk = -100;*/
									bigfish[i].test_alive = 0;
									bigfish[i].free();
									if (dem < 100) if (soundon == true) Mix_PlayChannel(-1, eatlevel3, 1);
									dem_ca_to += 1;
									dem += 3;
								}
							}
							for (int i = 0; i < 5; i++)
							{
								if (abs(x - bigfish[i].xk) <= 30 && abs(y - bigfish[i].yk) <= 30 && dem < 30) {
									alive = false;
									lose = false;
								}
							}

							for (int i = 0; i < (int)bigfish.size(); i++)
							{
								for (int j = 0; j < (int)muoito.size(); j++)
								{
									//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
									if (abs(bigfish[i].xk - muoito[j].xk) <= 50 && abs(bigfish[i].yk - muoito[j].yk) <= 50 && muoito[j].test_alive == 1)
									{
										/*SDL_DestroyTexture(muoito[j].Texmuoi);
										muoito[j].xk = -100;
										muoito[j].yk = -100;*/
										muoito[j].test_alive = 0;
										muoito[j].free();
									}
								}
							}

							for (int i = 0; i < (int)bigfish.size(); i++)
							{
								for (int j = 0; j < (int)muoi.size(); j++)
								{
									//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
									if (abs(bigfish[i].xk - muoi[j].xk) <= 20 && abs(bigfish[i].yk - muoi[j].yk) <= 20 && muoi[j].test_alive == 1)
									{
										/*SDL_DestroyTexture(muoi[j].Texmuoi);
										muoi[j].xk = -100;
										muoi[j].yk = -100;*/
										muoi[j].test_alive = 0;
										muoi[j].free();
									}
								}
							}

							for (int i = 0; i < (int)muoito.size(); i++)
							{
								for (int j = 0; j < (int)muoi.size(); j++)
								{
									//if (abs(bigfish[i].xk - muoito[j].xk) <= 65 && abs(bigfish[i].yk - muoito[j].yk) <= 65) bigfish_gap_midfish = true;
									if (abs(muoito[i].xk - muoi[j].xk) <= 20 && abs(muoito[i].yk - muoi[j].yk) <= 20 && muoi[j].test_alive == 1)
									{
										/*SDL_DestroyTexture(muoi[j].Texmuoi);
										muoi[j].xk = -100;
										muoi[j].yk = -100;*/
										muoi[j].test_alive = 0;
										muoi[j].free();
									}
								}
							}

							/*std::cout << dem <<" ";*/
							/*cout << dem << " ";*/
							SDL_Delay(20);
							if (dem >= 100)
							{
								win = true;

							}
							if (win == true) {
								SDL_Rect inwin = { 0,00,SCREEN_WIDTH ,SCREEN_HEIGHT };
								SDL_RenderCopy(gRenderer, Win, NULL, &inwin);

							}
							if (lose == false)
							{
								SDL_Rect inlose = { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };
								SDL_RenderCopy(gRenderer, Lose, NULL, &inlose);
								alive = false;
							}


							SDL_RenderPresent(gRenderer);
						}
					}
				}
			}
		}
	}



	close();

	return 0;
}
