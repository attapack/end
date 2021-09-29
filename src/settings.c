#include <../inc/header.h>

void settings (SDL_Event event,SDL_Renderer *renderer, bool running){

    SDL_Texture* background = IMG_LoadTexture(renderer, "textures/background/bg1.png");
    SDL_Texture* title = IMG_LoadTexture(renderer, "textures/background/title.png");
    SDL_Texture* back_button = IMG_LoadTexture(renderer, "textures/buttons/back_button.png");

    SDL_Rect title_rect = {TITLE_X, TITLE_Y, TITLE_SIZE_X, TITLE_SIZE_Y};
    SDL_Rect back_rect = {BACK_X, BACK_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};

    while (running)
    {
        SDL_RenderCopy(renderer, background, NULL, NULL);
        SDL_RenderCopy(renderer, title, NULL, &title_rect);
        SDL_RenderCopy(renderer, back_button, NULL, &back_rect);
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
