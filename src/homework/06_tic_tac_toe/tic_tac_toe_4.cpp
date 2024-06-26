#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/

bool TicTacToe4::check_column_win()
//if pegs (0, 4, 8, 12), (1, 5, 9, 13), (2, 6, 10, 14), 


//(3, 7, 11, 15)
//are all marked by either X or O, set column_win to true.
{    
    //check for (0, 4, 8, 12)
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" && pegs[12] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O" && pegs[12] == "O")
    {
        return true;
    }

    //check for (1, 5, 9, 13)
    if (pegs[1] == "X" && pegs[5] == "X" && pegs[9] == "X" && pegs[13] == "X")
    {
        return true;
    }
    if (pegs[1] == "O" && pegs[5] == "O" && pegs[9] == "O" && pegs[13] == "O")
    {
        return true;
    }

    //check for (2, 6, 10, 14)
    if (pegs[2] == "X" && pegs[6] == "X" && pegs[10] == "X" && pegs[14] == "X")
    {
        return true;
    }
    if (pegs[2] == "O" && pegs[6] == "O" && pegs[10] == "O" && pegs[14] == "O")
    {
        return true;
    }

    //check for (3, 7, 11, 15)
    if (pegs[3] == "X" && pegs[7] == "X" && pegs[11] == "X" && pegs[15] == "X")
    {
        return true;
    }
    if (pegs[3] == "O" && pegs[7] == "O" && pegs[11] == "O" && pegs[15] == "O")
    {
        return true;
    }

    //if none are triggered, return false
    else
    {
        return false;
    }
}




/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/

//define check_row_win
bool TicTacToe4::check_row_win()
//if pegs (0, 1, 2, 3); (4, 5, 6, 7); (8, 9, 10, 11); (12, 13, 14, 15);
//are all marked by either X or O, set check_row_win to true.
{    
    //check for (0, 1, 2, 3)
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" && pegs[3] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O" && pegs[3] == "O")
    {
        return true;
    }

    //check for (4, 5, 6, 7)
    if (pegs[4] == "X" && pegs[5] == "X" && pegs[6] == "X" && pegs[7] == "X")
    {
        return true;
    }
    if (pegs[4] == "O" && pegs[5] == "O" && pegs[6] == "O" && pegs[7] == "O")
    {
        return true;
    }

    //check for (8, 9, 10, 11)
    if (pegs[8] == "X" && pegs[9] == "X" && pegs[10] == "X" && pegs[11] == "X")
    {
        return true;
    }
    if (pegs[8] == "O" && pegs[9] == "O" && pegs[10] == "O" && pegs[11] == "O")
    {
        return true;
    }

    //check for (12, 13, 14, 15)
    if (pegs[12] == "X" && pegs[13] == "X" && pegs[14] == "X" && pegs[15] == "X")
    {
        return true;
    }
    if (pegs[12] == "O" && pegs[13] == "O" && pegs[14] == "O" && pegs[15] == "O")
    {
        return true;
    }

    //if none are triggered, return false
    else
    {
        return false;
    }
}


/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool TicTacToe4::check_diagonal_win()
//if pegs (0, 5, 10, 15); (3, 6, 9, 12);
//are all marked by either X or O, set check_diagonal_win to true.
{    
    //check for (3, 6, 9, 12);
    if (pegs[3] == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O" && pegs[3] == "O")
    {
        return true;
    }

    //check for (0, 5, 10, 15)
    if (pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "O")
    {
        return true;
    }

    //if none are triggered, return false
    else
    {
        return false;
    }
}