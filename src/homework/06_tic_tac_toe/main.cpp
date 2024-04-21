#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include<memory>
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string; using std::make_unique; using std::unique_ptr;

int main() 
{
	
	TicTacToeManager manager;

	char user_choice = 'y';


	do
	{
		int size;
		//modify tictactoe game to a unique_ptr to tictactoe
		std::unique_ptr<TicTacToe> game;
		//prompt the user to play tictactoe 3 or 4
		cout<<"Would you like to play TicTacToe 3 or 4?";
		cin>>size;
		//create an instance (make_unique) of TicTacToe 3 or 4
		if (size == 4)
		{
			game = std::make_unique<TicTacToe4>();
		}
		else
		{
			game = std::make_unique<TicTacToe3>();
		}

		
		string first_player;

		cout<<"Enter first player: ";
		cin>>first_player;

		game -> start_game(first_player);
		

		 while (!game -> game_over());
		{
			cin>>*game;
			cout<<*game;

			game -> game_over();
		}

		cout<<game -> get_winner()<<" winner!";

		manager.save_game(game);

		int o, x, t;
		manager.get_winner_total(x, o, t);

		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;


	}while(user_choice == 'y' || user_choice == 'Y');

	cout<<manager;

	return 0;
}