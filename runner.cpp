#include <iostream>
#include <vector>
#include <string>

struct Position {
    int x;
    int y;
};

void afficherEtat(const Position& joueur,
                  const std::vector<Position>& obstacles, int score) {
    std::cout << "Score : " << score << '\n';
    std::cout << "Joueur : (" << joueur.x << ", " << joueur.y << ")\n";
    for (const auto& obs : obstacles) {
        std::cout << "Obstacle : (" << obs.x << ", " << obs.y << ")\n";
    }
}

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

int main() {
    std::cout << "Runner CS.1109\n1. Jouer\n2. Quitter\nChoix ? ";
    int choix = 0;
    if (!(std::cin >> choix) || choix == 2) {
        return 0;
    }

    Position joueur{0, 0};
    std::vector<Position> obstacles{{5, 0}, {10, 0}, {15, 0}};
    int score = 0;
    std::string commande = "";

    while (commande != "quitte") {
        afficherEtat(joueur, obstacles, score);
        std::cout << "Commande (avance / quitte) ? ";
        if (!(std::cin >> commande)) {
            break;
        }
        traiterCommande(commande, joueur, score);
        if (verifierCollision(joueur, obstacles)) {
            std::cout << "Collision !\n";
            break;
        }
    }

    std::cout << "Score final : " << score << '\n';
    std::cout << "Merci d'avoir joué\n";
    return 0;
}
