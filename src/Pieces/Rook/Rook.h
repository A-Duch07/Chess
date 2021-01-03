//
// Created by Alexandre on 2021-01-02
//

#ifndef CHESS_ROO_H
#define CHESS_ROO_H

#include "../AbsPiece.h"

class Rook : public AbsPiece{
public:
    Rook();
    ~Rook();
    std::string getId() const;
    Tree getMoves() const;
    int getValue() const;

private:
    Tree *moves_;
    int value_;
    std::string id_;

};


#endif //CHESS_ROO_H