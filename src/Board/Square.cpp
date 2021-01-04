#include "Square.h"

Square::Square(AbsPiece *piece, int row, int col) : piece_(piece), row_(row), col_(col) {

}

bool Square::hasPiece() const{
    return piece_!= nullptr;
}

int Square::getRow() const{
    return row_;
}

int Square::getCol() const{
    return col_;
}

char *Square::getId() const {
    return id_;
}