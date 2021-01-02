#include "Square.h"

Square::Square(bool isTaken, int row, char col) : isTaken_(isTaken), row_(row), col_(col){}

bool Square::GetAvailability(){
    return isTaken_;
}

int Square::GetRow(){
    return row_;
}

char Square::GetCol(){
    return col_;
}

std::string Square::GetPosition(){
    return std::to_string(GetCol() + GetRow());
}

void Square::SetAvailability(bool isTaken) {
    isTaken_ = isTaken;
}

void Square::SetRow(int row){
    row_ = row;
}

void Square::SetCol(char col){
    col_ = col;
}