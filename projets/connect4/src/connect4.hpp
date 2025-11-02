#pragma once

#include <array>

// Implémentation du jeu Puissance 4.
namespace Connect4 {

    // Nombre de lignes dans le plateau de Puissance 4
    const int NI = 6;

    // Nombre de colonnes dans le plateau de Puissance 4
    const int NJ = 7;

    // Nombre de pièces consécutives nécessaires pour gagner
    const int WIN_CONDITION = 4;

    // Cellule du plateau de jeu
    enum class Cell {
        // Cellule vide
        EMPTY,

        // Cellule occupée par le Joueur 1
        PLAYER1,
        
        // Cellule occupée par le Joueur 2
        PLAYER2
    };

    // Etat du jeu
    enum class Status {
        // Jeu en cours, tour du Joueur 1
        PLAYER1_TURN,
        
        // Jeu en cours, tour du Joueur 2
        PLAYER2_TURN,

        // Le Joueur 1 a gagné
        PLAYER1_WINS,

        // Le Joueur 2 a gagné
        PLAYER2_WINS,
        
        // Jeu terminé par un match nul
        DRAW
    };

    // Structure représentant l'état d'une partie de Puissance 4
    struct Game {
        // Plateau de jeu, stocké en tableau 1D
        std::array<Cell, NI*NJ> board;

        // Hauteurs actuelles des colonnes du plateau
        std::array<int, NJ> heights;

        // Etat actuel du jeu
        Status status;
    };

    // Crée une nouvelle partie de Puissance 4
    Game newGame();

    // Retourne l'état actuel du jeu
    Status getStatus(const Game &game);

    // Indique si la partie est en cours
    bool isRunning(const Game &game);

    // Convertit les indices 2D (i, j) en indice 1D k
    int ij2k(int i, int j);

    // Obtient la nouvelle ligne disponible dans la colonne j
    // Retourne l'indice de la ligne disponible, ou -1 si la colonne est pleine ou invalide
    int getNewI(const Game &game, int j);

    // Joue un coup pour le joueur courant dans la colonne j
    // Retourne vrai si le coup a été joué avec succès, faux sinon
    bool playMove(Game &game, int j);

    // Indique si le joueur a gagné après avoir joué à la position (i, j)
    // Retourne true si le joueur a gagné, false sinon
    bool checkWin(const Game &game, Cell player, int i, int j);

    // Compte le nombre de pièces consécutives du joueur dans une direction donnée
    // Retourne nombre de pièces consécutives dans la direction (di, dj)
    int countInDirection(const Game &game, Cell player, int i, int j, int di, int dj);

} // Connect4


