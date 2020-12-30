//
// Created by fredericksimard on 2020-12-30.
//

#include "Game.h"

Game::Game() {

}

Game::~Game() {

}

void Game::initScreen(const char *title, int posX, int posY, int width, int height, bool fullscreen) {
    int flags = 0;

    if (fullscreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "Init done!" << std::endl;
        window = SDL_CreateWindow(title, posX, posY, width, height, flags);

        if (!window) {
            std::cout << "Error creating the window" << std::endl;
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (!renderer) {
            std::cout << "Error with the renderer" << std::endl;
        }
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        isRunning = true;
    } else {
        std::cout << "Error : " << SDL_GetError() << std::endl;
        isRunning = false;
    }
}

void Game::handleEvents() {
    SDL_Event  event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
        default:
            break;
    }
}

void Game::update() {

}

void Game::render() {
    SDL_RenderClear(renderer);

    //Rendering stuff
    SDL_RenderPresent(renderer);
}

void Game::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Exit." << std::endl;
}
