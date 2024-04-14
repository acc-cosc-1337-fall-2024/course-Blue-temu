//h
#include "tic_tac_toe.h"

#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_MANAGER
#define TIC_TAC_TOE_MANAGER

class TicTacToeManager
{

public:
    void save_game(TicTacToe b);
    friend std::ostream& operator<<(std::ostream & out,const TicTacToeManager& manager);
    void get_winner_total(int& o, int& w, int& t); 

private:
    std::vector<TicTacToe> games;   
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;

    void update_winner_count(std::string winner);

};
#endif