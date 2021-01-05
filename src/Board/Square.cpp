#include "Square.h"

Square::Square(AbsPiece *piece, int row, int col) : piece_(piece), row_(row), col_(col) {
    id_ = (char)(col + 'A');
    id_ += (char)(row + '1');
}

Square::~Square() {
    delete piece_;
}


bool Square::hasPiece() const {
    return piece_!= nullptr;
}

int Square::getRow() const {
    return row_;
}

int Square::getCol() const {
    return col_;
}

std::string Square::getId() const {
    return id_;
}

void Square::setPiece(AbsPiece *piece) {
    piece_ = piece;
}


