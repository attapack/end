#ifndef HEADER_H
#define HEADER_H
#include <SDL2/SDL.h>
#include "SDL2_image/SDL_image.h"
#include "SDL2_mixer/SDL_mixer.h"
#include "SDL2_ttf/SDL_ttf.h" 
#include <stdio.h>
#include <stdbool.h>


#define WINDOW_WIDTH    1920
#define WINDOW_HEIGHT   1080

#define TITLE_SIZE_X 940
#define TITLE_SIZE_Y 135
#define BUTTON_SIZE_X 360
#define BUTTON_SIZE_Y 115

/*SDL_Init(SDL_INIT_EVERYTHING);
IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);
SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
TTF_Init();
SDL_Window * window = SDL_CreateWindow("Asteroids", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);
SDL_Renderer *renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);
SDL_Event event;
bool running = true;*/
//////////////////////////////////////
//MENU BUTTONS
//////////////////////////////////////
bool menu(SDL_Renderer *, bool);
#define TITLE_X 490
#define TITLE_Y 100
#define START_X 1400
#define START_Y 395
#define MUSIC_X 1400
#define MUSIC_Y 530
#define SETTINGS_X 1400
#define SETTINGS_Y 665
#define EXIT_X 1400
#define EXIT_Y 800
//////////////////////////////////////
//MUSIC BUTTONS
//////////////////////////////////////
void music(SDL_Event,SDL_Renderer *, bool);
#define BACK_X 780
#define BACK_Y 800
#define MUSIC1_X 250
#define MUSIC1_Y 300
#define MUSIC2_X 250
#define MUSIC2_Y 450
#define MUSIC3_X 250
#define MUSIC3_Y 600
#define MUSIC4_X 780
#define MUSIC4_Y 300
#define MUSIC5_X 780
#define MUSIC5_Y 450
#define MUSIC6_X 780
#define MUSIC6_Y 600
#define MUSIC7_X 1310
#define MUSIC7_Y 300
#define MUSIC8_X 1310
#define MUSIC8_Y 450
#define MUSIC9_X 1310
#define MUSIC9_Y 600



//////////////////////////////////////
//SETTINGS BUTTONS
//////////////////////////////////////
void settings(SDL_Event,SDL_Renderer *, bool);
#define BACK_X 780
#define BACK_Y 800


#endif

