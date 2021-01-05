#define SDL_MAIN_HANDLED
#include <iostream>
#include "view/Game.h"
#include "Board/Square.h"

int main(int argc, char *argv[]) {
    Game* game = new Game();

    //Just a basic frame cap... Not the best solution. Will change it later
    const int FPS = 60;
    const int FRAMEDELAY = 1000 / FPS;

    int frameStart;
    int frameTime;

    game->initScreen("Chess game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);


    while (game->running()) {

        frameStart = SDL_GetTicks();
        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if (FRAMEDELAY > frameTime) {
            SDL_Delay(FRAMEDELAY - frameTime);
        }

    }
    game->clean();
}