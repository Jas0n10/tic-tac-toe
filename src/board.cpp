#include "board.h"

#include <iostream>

using namespace std;

char playerToChar(Player p) {
    switch (p) {
        case NONE: return ' ';
        case X: return 'X';
        case O: return 'O';
    }
}

TicTacToeBoard::TicTacToeBoard()
{
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j)
        array[i][j] = 0;
    }

}



void TicTacToeBoard::print() const
{
    
}

bool TicTacToeBoard::isValidMove(int move) const
{
    // TODO
    return false;
}

void TicTacToeBoard::move(Player player, int move)
{
    char m = playerToChar(player);

    int row = move/3;
    int col = move-(row-1)*3;

   array[col][row] = player;


}

bool TicTacToeBoard::isGameOver() const
{
    
    return false;
}

bool TicTacToeBoard::isTie() const
{
    // TODO
    return false;
}

bool TicTacToeBoard::hasPlayerWon(Player player) const
{
    // TODO
    return false;
}
