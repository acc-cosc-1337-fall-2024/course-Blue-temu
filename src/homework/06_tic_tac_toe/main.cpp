#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string first_player;

	TicTacToeManager manager;

	char user_choice = 'y';


	do
	{
		TicTacToe game;
		string first_player;

		cout<<"Enter first player: ";
		cin>>first_player;

		game.start_game(first_player);
		

		while(!game.game_over())
		{
			cin>>game;
			cout<<game;

			game.game_over();
		}

		cout<<game.get_winner()<<" winner!";

		manager.save_game(game);

		int o, x, t;
		manager.get_winner_total(x, o, t);

		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;


	}while(user_choice == 'y' || user_choice == 'Y');

	cout<<manager;

	return 0;
}