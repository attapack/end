#include <../inc/header.h>

void music (SDL_Event event,SDL_Renderer *renderer, bool running){

    SDL_Texture* background = IMG_LoadTexture(renderer, "textures/background/bg1.png");
    SDL_Texture* title = IMG_LoadTexture(renderer, "textures/background/title.png");
    SDL_Texture* back_button = IMG_LoadTexture(renderer, "textures/buttons/back_button.png");
    SDL_Texture* music1_button = IMG_LoadTexture(renderer, "textures/buttons/button.png");
    SDL_Texture* music2_button = IMG_LoadTexture(renderer, "textures/buttons/button.png");
    SDL_Texture* music3_button = IMG_LoadTexture(renderer, "textures/buttons/button.png");
    SDL_Texture* music4_button = IMG_LoadTexture(renderer, "textures/buttons/button.png");
    SDL_Texture* music5_button = IMG_LoadTexture(renderer, "textures/buttons/button.png");
    SDL_Texture* music6_button = IMG_LoadTexture(renderer, "textures/buttons/button.png");
    SDL_Texture* music7_button = IMG_LoadTexture(renderer, "textures/buttons/button.png");
    SDL_Texture* music8_button = IMG_LoadTexture(renderer, "textures/buttons/button.png");
    SDL_Texture* music9_button = IMG_LoadTexture(renderer, "textures/buttons/button.png");

    SDL_Rect title_rect = {TITLE_X, TITLE_Y, TITLE_SIZE_X, TITLE_SIZE_Y};
    SDL_Rect back_rect = {BACK_X, BACK_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music1_rect = {MUSIC1_X, MUSIC1_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music2_rect = {MUSIC2_X, MUSIC2_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music3_rect = {MUSIC3_X, MUSIC3_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music4_rect = {MUSIC4_X, MUSIC4_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music5_rect = {MUSIC5_X, MUSIC5_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music6_rect = {MUSIC6_X, MUSIC6_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music7_rect = {MUSIC7_X, MUSIC7_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music8_rect = {MUSIC8_X, MUSIC8_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music9_rect = {MUSIC9_X, MUSIC9_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};

    

    while (running)
    {
        SDL_RenderCopy(renderer, background, NULL, NULL);
        SDL_RenderCopy(renderer, title, NULL, &title_rect);
        SDL_RenderCopy(renderer, back_button, NULL, &back_rect);
        
        SDL_RenderCopy(renderer, music1_button, NULL, &music1_rect);
        SDL_RenderCopy(renderer, music2_button, NULL, &music2_rect);
        SDL_RenderCopy(renderer, music3_button, NULL, &music3_rect);
        SDL_RenderCopy(renderer, music4_button, NULL, &music4_rect);
        SDL_RenderCopy(renderer, music5_button, NULL, &music5_rect);
        SDL_RenderCopy(renderer, music6_button, NULL, &music6_rect);
        SDL_RenderCopy(renderer, music7_button, NULL, &music7_rect);
        SDL_RenderCopy(renderer, music8_button, NULL, &music8_rect);
        SDL_RenderCopy(renderer, music9_button, NULL, &music9_rect);

         while (SDL_PollEvent(&event))
        {
            switch (event.type) {
                case SDL_MOUSEBUTTONDOWN:
                    if (event.button.button == SDL_BUTTON_LEFT
                    && event.button.x >= BACK_X
                    && event.button.x <= BACK_X + BUTTON_SIZE_X
                    && event.button.y >= BACK_Y
                    && event.button.y <= BACK_Y + BUTTON_SIZE_Y) {
                        running = false;                     
                        break;
                    }
                    break;
            }
        }
        SDL_RenderPresent(renderer);
    }
}
