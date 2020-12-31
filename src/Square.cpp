#include "Square.h"

bool Square::GetAvailability(){
    return isTaken_;
}

int Square::GetRow(){
    return row_;
}

char Square::GetCol(){
    return col_;
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