#ifndef BOARD_H
#define BOARD_H

#include <vector>

struct Position {
    int x;
    int y;
};

void afficherEtat(const Position& joueur,
                  const std::vector<Position>& obstacles, int score);

#endif // BOARD_H
