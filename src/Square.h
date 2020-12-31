//
// Created by Alexandre Touchette on 2020-12-31.
//

#ifndef CHESS_SQUARE_H
#define CHESS_SQUARE_H
#define SDL_MAIN_HANDLED

#include <string>

class Square{
    public:
        Square(bool isTaken, int row, char col);

        bool GetAvailability();
        int GetRow();
        char GetCol();
        std::string GetPosition();

        void SetAvailability(bool isTaken);
        void SetRow(int row);
        void SetCol(char col);
        
    private:
        bool isTaken_;
        int row_;
        char col_;
};


#endif //CHESS_SQUARE_H