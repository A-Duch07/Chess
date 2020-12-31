//
// Created by Anthony on 12/30/2020.
//

#ifndef CHESS_ABSPIECE_H
#define CHESS_ABSPIECE_H

#include "../Graph/Graph.h"
#include <string>
#include <unordered_map>


class AbsPiece {
public:
    virtual std::string getId() = 0;
    virtual Graph getMoves() = 0;
    virtual int getValue() = 0;

private:
    std::string id;
    Graph *moves;
    int value;
};


#endif //CHESS_ABSPIECE_H
