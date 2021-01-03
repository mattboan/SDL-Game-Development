/*
    Hello World for SDL2, working on Ubuntu 20.04

    Author: Matt Boan
    Date: 03_01_21
*/

#include <stdio.h>

#include<SDL2/SDL.h>


SDL_Window * g_pWindow = 0;
SDL_Renderer * g_pRenderer = 0;

int main(int argc, char * args[]) {
    //InitSDL
    if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) {
        g_pWindow = SDL_CreateWindow("Chapter 1 - Setting Up SDL2", 
            SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480,
            SDL_WINDOW_SHOWN);
    
        //If window is created, create a renderer
        if (g_pWindow != 0) {
            g_pRenderer = SDL_CreateRenderer(g_pWindow, -1, 0);
        } else {
            return 1;
        }    
    } else {
        return 1;
    }

    //Draw to the window
    SDL_SetRenderDrawColor(g_pRenderer, 22, 22, 22, 255);
    SDL_RenderClear(g_pRenderer);
    SDL_RenderPresent(g_pRenderer);

    //Add a delay so the program doesn't immediately quit
    SDL_Delay(5000);
    SDL_Quit();
    return 0;
}