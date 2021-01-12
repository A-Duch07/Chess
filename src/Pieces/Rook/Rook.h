//
// Created by Alexandre on 2021-01-02
//

#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H

#include "../AbsPiece.h"

class Rook : public AbsPiece{
public:
    Rook(Tree *moves, int value, std::string id);
    ~Rook();
    std::string getId() const;
    Tree getMoves() const override;
    int getValue() const;

private:
    Tree *moves_;
    int value_;
    std::string id_;

};


#endif //CHESS_ROOK_H