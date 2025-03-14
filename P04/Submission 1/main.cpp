#include <iostream>
#include <string>
#include "TicTacToeHelper.h"

int main()
{
    //Empty board
    std::string emptyBoard = generateEmptyBoard();
    std::cout <<"Empty board: " <<emptyBoard <<std::endl;

    //Partially full board
    std::string partialBoard = "11 001 1  ";
    for (int i = 0; i < 9; i++) {
        std::cout << "Cell " << i << ": " << getCell(partialBoard, i) << std::endl;
    }
    //Full board
    std::string fullBoard = "101111001";
    for (int i = 0; i < 9; i++) {
        std::cout << "Cell " << i << ": " << getCell(fullBoard, i) << std::endl;
    }

    //Win testing Player A
    std::string rowWinA1 = "000      ";
    std::string rowWinA2 = "   000   ";
    std::string rowWinA3 = "      000";
    std::cout << "Row win 1 Player A: " << isAWinner(rowWinA1) << std::endl;
    std::cout << "Row win 2 Player A: " << isAWinner(rowWinA2) << std::endl;
    std::cout << "Row win 3 Player A: " << isAWinner(rowWinA3) << std::endl;

    
    //Win testing Player B
    std::string rowWinB1 = "111      ";
    std::string rowWinB2 = "   111   ";
    std::string rowWinB3 = "      111";
    std::cout << "Row win 1 Player B: " << isBWinner(rowWinB1) << std::endl;
    std::cout << "Row win 2 Player B: " << isBWinner(rowWinB2) << std::endl;
    std::cout << "Row win 3 Player B: " << isBWinner(rowWinB3) << std::endl;

    //Diagonal wins
    std::string diagWin1 = "011 10  1";
    std::string diagWin2 = "110 1010  ";
    std::cout << "Diag win 1: " << isAWinner(diagWin1) << std::endl;
    std::cout << "Diag win 2: " << isAWinner(diagWin2) << std::endl;

    std::string noWinBoard = "10 101   ";
    std::cout << "No win: " << isAWinner(noWinBoard) << std::endl;

    //No win
    std::string noWin = "10 101   ";
    std::cout <<"No win: " << isAWinner(noWin) <<std::endl;

    return 0;
}
