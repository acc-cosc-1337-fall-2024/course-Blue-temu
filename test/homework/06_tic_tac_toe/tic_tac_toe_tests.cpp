#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);

	REQUIRE(game.game_over() == true);
}



TEST_CASE("Test first player set to X")
{
  TicTacToe game;
  game.start_game("X");
  
  REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
  TicTacToe game;
  game.start_game("O");

  REQUIRE(game.get_player() == "O");
}

// column wins ///////////////////////

TEST_CASE("Test win by first column")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(1); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(7); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(2); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(1); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(8); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(3); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(6); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(9); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

// row wins ///////////////////////

TEST_CASE("Test win by first row")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(1); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(3); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(4); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(1); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(6); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(7); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(8); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(9); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

// diagonal wins ///////////////////////

TEST_CASE("Test win diagonally from top left")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(1); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(9); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(7); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(3); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}



TEST_CASE("Test Winner Tally Totals")
{
	TicTacToe game1;
	TicTacToeManager manager;

	//game 1 = X win

	game1.start_game("X");

	game1.mark_board(1);
	game1.mark_board(3);

	game1.mark_board(5);
	game1.mark_board(2);

	game1.mark_board(9);
	game1.mark_board(6);

	REQUIRE(true == game1.game_over());

	//save the game
	manager.save_game(game1);

	//game 2 = O win
	TicTacToe game2;

	game2.start_game("O");

	game2.mark_board(7);
	game2.mark_board(1);

	game2.mark_board(5);
	game2.mark_board(2);

	game2.mark_board(3);
	game2.mark_board(8);

	REQUIRE(true == game2.game_over());

	//save the game
	manager.save_game(game2);

	//game 3 = ties
	TicTacToe game3;

	game3.start_game("O");

	game3.mark_board(1);
	game3.mark_board(2);

	game3.mark_board(3);
	game3.mark_board(5);

	game3.mark_board(4);
	game3.mark_board(7);

	game3.mark_board(8);
	game3.mark_board(9);

	game3.mark_board(6);

	//save game 3
	manager.save_game(game3);

	int x, o, t;
	manager.get_winner_total(x, o, t);

	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);


}
