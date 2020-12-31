//
// Created by fredericksimard on 2020-12-30.
//

#ifndef CHESS_GAME_H
#define CHESS_GAME_H
#define SDL_MAIN_HANDLED

#include "SDL2/SDL.h"
#include <iostream>

class Game {
public:
    Game();
    ~Game();

    void initScreen(const char* title, int posX, int posY, int width, int height, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();

    bool running();

private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
};


#endif //CHESS_GAME_H
