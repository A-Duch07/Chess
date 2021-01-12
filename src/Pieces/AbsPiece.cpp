//
// Created by Anthony on 12/30/2020.
//

#include "AbsPiece.h"

AbsPiece::AbsPiece(Tree *moves, int value, int row, int col) : moves_(moves), value_(value), row_(row), col_(col) {}

AbsPiece::~AbsPiece() {
    delete moves_;
}

Tree AbsPiece::getMoves() const {
    return *moves_;
}

int AbsPiece::getValue() const {
    return value_;
}

int AbsPiece::getRow() const {
    return row_;
}

int AbsPiece::getCol() const {
    return col_;
}
