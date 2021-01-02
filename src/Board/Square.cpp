#include "Square.h"

Square::Square(const AbsPiece& piece, int row, int col) : piece_(nullptr), row_(row), col_(col) {

}

bool Square::GetAvailability() const{
    return piece_!= nullptr;
}

int Square::GetRow() const{
    return row_;
}

char Square::GetCol() const{
    return col_;
}

std::string Square::GetPosition() const{
    return std::to_string(GetCol() + GetRow());
}