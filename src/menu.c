#include <../inc/header.h>

bool menu (SDL_Renderer *renderer, bool running){

    SDL_Event event;

    SDL_Texture* background = IMG_LoadTexture(renderer, "textures/background/bg1.png");
    SDL_Texture* title = IMG_LoadTexture(renderer, "textures/background/title.png");
    SDL_Texture* start_button = IMG_LoadTexture(renderer, "textures/buttons/start_button.png");
    SDL_Texture* music_button = IMG_LoadTexture(renderer, "textures/buttons/music_button.png");
    SDL_Texture* settings_button = IMG_LoadTexture(renderer, "textures/buttons/settings_button.png");
    SDL_Texture* exit_button = IMG_LoadTexture(renderer, "textures/buttons/exit_button.png");
    //SDL_Texture* info_button = IMG_LoadTexture(renderer, "textures/buttons/info_button.png");
    
    SDL_Rect title_rect = {TITLE_X, TITLE_Y, TITLE_SIZE_X, TITLE_SIZE_Y};
    SDL_Rect start_rect = {START_X, START_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect music_rect = {MUSIC_X, MUSIC_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect settings_rect = {SETTINGS_X, SETTINGS_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    SDL_Rect exit_rect = {EXIT_X, EXIT_Y, BUTTON_SIZE_X, BUTTON_SIZE_Y};
    
    while (running)
    {
        
        SDL_RenderCopy(renderer, background, NULL, NULL);
        SDL_RenderCopy(renderer, title, NULL, &title_rect);
        SDL_RenderCopy(renderer, start_button, NULL, &start_rect);
        SDL_RenderCopy(renderer, music_button, NULL, &music_rect);
        SDL_RenderCopy(renderer, settings_button, NULL, &settings_rect);
        SDL_RenderCopy(renderer, exit_button, NULL, &exit_rect);
         while (SDL_PollEvent(&event))
        {
            switch (event.type) {
                case SDL_MOUSEBUTTONDOWN:
                    if (event.button.button == SDL_BUTTON_LEFT
                    && event.button.x >= EXIT_X
                    && event.button.x <= EXIT_X + BUTTON_SIZE_X
                    && event.button.y >= EXIT_Y
                    && event.button.y <= EXIT_Y + BUTTON_SIZE_Y) {
                        running = false;                     
                        break;
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT
                    && event.button.x >= MUSIC_X
                    && event.button.x <= MUSIC_X + BUTTON_SIZE_X
                    && event.button.y >= MUSIC_Y
                    && event.button.y <= MUSIC_Y + BUTTON_SIZE_Y) {
                        SDL_RenderPresent(renderer);
                        music(event,renderer, running);                    
                        break;
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT
                    && event.button.x >= SETTINGS_X
                    && event.button.x <= SETTINGS_X + BUTTON_SIZE_X
                    && event.button.y >= SETTINGS_Y
                    && event.button.y <= SETTINGS_Y + BUTTON_SIZE_Y) {
                        SDL_RenderPresent(renderer);
                        settings(event,renderer, running);                    
                        break;
                    }
                    break;
            }
        }
        SDL_RenderPresent(renderer);
    }
    return running;
}
