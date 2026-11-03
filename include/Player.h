#ifndef PLAYER_H
#define PLAYER_H

#include "Board.h"
#include <string>
#include <vector>

void traiterCommande(const std::string& cmd, Position& joueur, int& score);
bool verifierCollision(const Position& joueur,
                       const std::vector<Position>& obstacles);

#endif // PLAYER_H
