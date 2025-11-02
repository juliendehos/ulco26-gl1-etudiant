
#include "connect4.hpp"

Connect4::Game Connect4::newGame() {
    Game game;
    game.board.fill(Cell::EMPTY);
    game.heights.fill(0);
    game.status = Status::PLAYER1_TURN;
    return game;
}

Connect4::Status Connect4::getStatus(const Game &game) {
    return game.status;
}

bool Connect4::isRunning(const Game &game) {
    return game.status == Status::PLAYER1_TURN
        or game.status == Status::PLAYER2_TURN;
}

int Connect4::ij2k(int i, int j) {
    return i * NJ + j;
}

int Connect4::getNewI(const Game &game, int j) {

    // TODO getNewI

    return -1;
}

bool Connect4::playMove(Game &game, int j) {

    // TODO playMove

    return false;
}

bool Connect4::checkWin(const Game &game, Cell player, int i, int j) {

    // TODO checkWin

    return false;
}

int Connect4::countInDirection(const Game &game, Cell player, int i, int j, int di, int dj) {
    int count = 0;
    int ni = i + di;
    int nj = j + dj;

    while (ni >= 0 && ni < NI && nj >= 0 && nj < NJ && game.board[ij2k(ni, nj)] == player) {
        count++;
        ni += di;
        nj += dj;
    }
    return count;
}


