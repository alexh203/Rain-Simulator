#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_video.h>

int main(int argc, char *argv[]){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Rain sim", 800, 600, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);
    SDL_Event event;
    bool running = true;

    while (running){
        while (SDL_PollEvent(&event)){
            if(event.type == SDL_EVENT_QUIT)
                running = false;
        }
        SDL_SetRenderDrawColor(renderer,10,10,20,255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }




    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
