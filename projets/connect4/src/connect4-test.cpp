#include "connect4.hpp"

#include <catch2/catch_test_macros.hpp>

using namespace Connect4;

bool playMoves(Game &game, const std::vector<int> &moves) {
  for (int j : moves) {
      if (not playMove(game, j)) {
          return false;
      }
  }
  return true;
}

///////////////////////////////////////////////////////////////////////////////
// newGame
///////////////////////////////////////////////////////////////////////////////

TEST_CASE("newGame", "[connect4]") {
    Game game = newGame();
    REQUIRE( game.status == Status::PLAYER1_TURN );
    for (int j = 0; j < NJ; ++j) {
        REQUIRE( game.heights[j] == 0 );
        for (int i = 0; i < NI; ++i) {
            REQUIRE( game.board[i*NJ + j] == Cell::EMPTY );
        }
    }
}

///////////////////////////////////////////////////////////////////////////////
// isRunning
///////////////////////////////////////////////////////////////////////////////

TEST_CASE("isRunning", "[connect4]") {
    Game game = newGame();
    REQUIRE( isRunning(game) == true );
    game.status = Status::PLAYER1_WINS;
    REQUIRE( isRunning(game) == false );
    game.status = Status::PLAYER2_WINS;
    REQUIRE( isRunning(game) == false );
    game.status = Status::DRAW;
    REQUIRE( isRunning(game) == false );
}

///////////////////////////////////////////////////////////////////////////////
// getNewI
///////////////////////////////////////////////////////////////////////////////

/*
// TODO test getNewI
TEST_CASE("getNewI 1", "[connect4]") {
    Game game = newGame();
    REQUIRE( getNewI(game, -1) == -1 );
    REQUIRE( getNewI(game, NJ) == -1 );
    for (int j = 0; j < NJ; ++j) {
        REQUIRE( getNewI(game, j) == 0 );
    }
}

TEST_CASE("getNewI 2", "[connect4]") {
    Game game = newGame();
    game.heights[3] = NI;
    REQUIRE( getNewI(game, 3) == -1 );
    for (int j = 0; j < NJ; ++j) {
        if (j != 3) {
            REQUIRE( getNewI(game, j) == 0 ); 
        }
    }
}
*/

///////////////////////////////////////////////////////////////////////////////
// ij2k
///////////////////////////////////////////////////////////////////////////////

TEST_CASE("ij2k", "[connect4]") {
    REQUIRE( ij2k(0,0) == 0 );
    REQUIRE( ij2k(0,1) == 1 );
    REQUIRE( ij2k(0,6) == 6 );
    REQUIRE( ij2k(1,0) == 7 );
    REQUIRE( ij2k(1,1) == 8 );
    REQUIRE( ij2k(5,6) == 41 );
}

///////////////////////////////////////////////////////////////////////////////
// playMove
///////////////////////////////////////////////////////////////////////////////

/*
// TODO test playMove
TEST_CASE("playMove", "[connect4]") {
    Game game = newGame();

    REQUIRE( playMove(game, 3) == true );
    REQUIRE( game.board[ij2k(0,3)] == Cell::PLAYER1 );
    REQUIRE( game.heights[3] == 1 );
    REQUIRE( game.status == Status::PLAYER2_TURN );

    REQUIRE( playMove(game, 3) == true );
    REQUIRE( game.board[ij2k(1,3)] == Cell::PLAYER2 );
    REQUIRE( game.heights[3] == 2 );
    REQUIRE( game.status == Status::PLAYER1_TURN );
}

TEST_CASE("playMove invalid", "[connect4]") {
    Game game = newGame();
    REQUIRE( playMove(game, -1) == false );
    REQUIRE( playMove(game, NJ) == false );
}

TEST_CASE("playMove column 1 is full", "[connect4]") {
    Game game = newGame();
    const std::vector<int> moves = {
        1,1,1,1,1,1
    };
    REQUIRE( playMoves(game, moves) == true );
    REQUIRE( game.status == Status::PLAYER1_TURN );

    REQUIRE( playMove(game, 1) == false );
    REQUIRE( game.status == Status::PLAYER1_TURN );
}

TEST_CASE("playMove win", "[connect4]") {
    Game game = newGame();
    const std::vector<int> moves = {
        0,1,0,1,
        0,1,0
    };
    REQUIRE( playMoves(game, moves) == true );
    REQUIRE( game.status == Status::PLAYER1_WINS );
}

TEST_CASE("playMove draw", "[connect4]") {
    Game game = newGame();
    const std::vector<int> moves = {
        0,1,0,1,
        0,1,2,3,
        2,3,2,3,
        4,5,4,5,
        4,5,6,6,
        1,0,1,0,
        1,0,3,2,
        3,2,3,2,
        5,4,5,4,
        5,4,6,6,
        6,6
    };
    REQUIRE( playMoves(game, moves) == true );
    REQUIRE( game.status == Status::DRAW );
}

TEST_CASE("playMove after player2 wins", "[connect4]") {
    // TODO
}
*/

///////////////////////////////////////////////////////////////////////////////
// checkWin
///////////////////////////////////////////////////////////////////////////////

/*
// TODO test checkWin
TEST_CASE("checkWin", "[connect4]") {
    Game game = newGame();
    // Horizontal win
    for (int j = 0; j < WIN_CONDITION; ++j) {
        game.board[ij2k(0, j)] = Cell::PLAYER1;
    }
    REQUIRE( checkWin(game, Cell::PLAYER1, 0, WIN_CONDITION - 1) == true );

    game = newGame();
    // Vertical win
    for (int i = 0; i < WIN_CONDITION; ++i) {
        game.board[ij2k(i, 0)] = Cell::PLAYER2;
    }
    REQUIRE( checkWin(game, Cell::PLAYER2, WIN_CONDITION - 1, 0) == true );

    game = newGame();
    // Diagonal win
    for (int d = 0; d < WIN_CONDITION; ++d) {
        game.board[ij2k(d, d)] = Cell::PLAYER1;
    }
    REQUIRE( checkWin(game, Cell::PLAYER1, WIN_CONDITION - 1, WIN_CONDITION - 1) == true );
}

TEST_CASE("checkWin no win", "[connect4]") {
    Game game = newGame();
    // No win condition
    game.board[ij2k(0, 0)] = Cell::PLAYER1;
    game.board[ij2k(0, 1)] = Cell::PLAYER1;
    game.board[ij2k(1, 0)] = Cell::PLAYER2;
    REQUIRE( checkWin(game, Cell::PLAYER1, 0, 1) == false );
    REQUIRE( checkWin(game, Cell::PLAYER2, 1, 0) == false );
}

TEST_CASE("checkWin edge cases", "[connect4]") {
    Game game = newGame();
    // Edge case: win at the edge of the board
    for (int j = NJ - WIN_CONDITION; j < NJ; ++j) {
        game.board[ij2k(0, j)] = Cell::PLAYER1;
    }
    REQUIRE( checkWin(game, Cell::PLAYER1, 0, NJ - 1) == true );
}

TEST_CASE("checkWin interrupted sequence", "[connect4]") {
    Game game = newGame();
    // Interrupted sequence should not count as win
    for (int j = 0; j < WIN_CONDITION + 1; ++j) {
      if (j == 2) {
          game.board[ij2k(0, j)] = Cell::PLAYER2; // Interrupting piece
      } else {
          game.board[ij2k(0, j)] = Cell::PLAYER1;
      }
    }
    REQUIRE( checkWin(game, Cell::PLAYER1, 0, WIN_CONDITION) == false );
}
*/

///////////////////////////////////////////////////////////////////////////////
// countInDirection
///////////////////////////////////////////////////////////////////////////////

TEST_CASE("countInDirection", "[connect4]") {
    Game game = newGame();
    // Set up pieces in a line
    for (int j = 0; j < 3; ++j) {
        game.board[ij2k(0, j)] = Cell::PLAYER1;
    }
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 2, 0, -1) == 2 ); // left from 2
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 0, 0, 1) == 2 ); // right from 0
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 0, 0, -1) == 0 ); // left from 0
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 2, 0, 1) == 0 ); // right from 2
}

TEST_CASE("countInDirection no pieces", "[connect4]") {
    Game game = newGame();
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 0, 0, 1) == 0 );
}

TEST_CASE("countInDirection interrupted", "[connect4]") {
    Game game = newGame();
    game.board[ij2k(0, 0)] = Cell::PLAYER1;
    game.board[ij2k(0, 1)] = Cell::PLAYER2; // Interrupting piece
    game.board[ij2k(0, 2)] = Cell::PLAYER1;
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 0, 0, 1) == 0 ); // Right
}

TEST_CASE("countInDirection diagonal", "[connect4]") {
    Game game = newGame();
    for (int d = 0; d < 3; ++d) {
        game.board[ij2k(d, d)] = Cell::PLAYER1;
    }
    REQUIRE( countInDirection(game, Cell::PLAYER1, 2, 2, -1, -1) == 2 ); 
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 0, -1, -1) == 0 ); 
    REQUIRE( countInDirection(game, Cell::PLAYER1, 2, 2, 1, 1) == 0 ); 
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 0, 1, 1) == 2 ); 
}

TEST_CASE("countInDirection out of bounds", "[connect4]") {
    Game game = newGame();
    game.board[ij2k(0, 0)] = Cell::PLAYER1;
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 0, -1, 0) == 0 ); // Up
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 0, 0, -1) == 0 ); // Left
}

TEST_CASE("countInDirection full line", "[connect4]") {
    Game game = newGame();
    for (int j = 0; j < NJ; ++j) {
        game.board[ij2k(0, j)] = Cell::PLAYER1;
    }
    REQUIRE( countInDirection(game, Cell::PLAYER1, 0, 0, 0, 1) == NJ - 1 ); // Right
}

TEST_CASE("countInDirection single piece", "[connect4]") {
    Game game = newGame();
    game.board[ij2k(3, 3)] = Cell::PLAYER2;
    REQUIRE( countInDirection(game, Cell::PLAYER2, 3, 3, 1, 0) == 0 ); // Down
    REQUIRE( countInDirection(game, Cell::PLAYER2, 3, 3, 0, 1) == 0 ); // Right
}

TEST_CASE("countInDirection negative direction", "[connect4]") {
    Game game = newGame();
    for (int i = 0; i < 3; ++i) {
        game.board[ij2k(i, 0)] = Cell::PLAYER1;
    }
    REQUIRE( countInDirection(game, Cell::PLAYER1, 2, 0, -1, 0) == 2 ); // Up
}



