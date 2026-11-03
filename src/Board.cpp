#include "Board.h"
#include <iostream>

void afficherEtat(const Position& joueur,
                  const std::vector<Position>& obstacles, int score) {
    std::cout << "Score : " << score << '\n';
    std::cout << "Joueur : (" << joueur.x << ", " << joueur.y << ")\n";
    for (const auto& obs : obstacles) {
        std::cout << "Obstacle : (" << obs.x << ", " << obs.y << ")\n";
    }
}
