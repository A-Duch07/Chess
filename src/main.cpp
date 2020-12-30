#define SDL_MAIN_HANDLED
#include <iostream>
#include "view/Game.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!sddsdsdsdsds" << std::endl;
    Game* game = new Game();

    game->initScreen("Chess game,", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);


    while (game->running()) {
        game->handleEvents();
        game->update();
        game->render();
    }
    game->clean();
}