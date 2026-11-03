#include "Player.h"

void traiterCommande(const std::string& cmd, Position& joueur, int& score) {
    if (cmd == "avance") {
        joueur.x += 1;
        score += 1;
    }
}

bool verifierCollision(const Position& joueur,
                      const std::vector<Position>& obstacles) {
    for (const auto& obs : obstacles) {
        if (joueur.x == obs.x && joueur.y == obs.y) {
            return true;
        }
    }
    return false;
}
