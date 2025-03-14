#include "TicTacToeHelper.h"
#include <string>
#include <iostream>

std::string generateEmptyBoard() {
    return "         ";
}

char getCell(std::string board, int cellIndex) {
    //return contents of cell at provided 'CellIndex' using the passed-in board
    return board[cellIndex];
}

std::string makeMove(std::string board, int position, char symbol) {
    //place passed in symbol at passed in position in board
    board[position] = symbol;
    
    return board;
}

std::string prettyPrint(std::string board) {
    std::string result = "";
    result = result + board[0] + "|" + board[1] + "|" + board[2] + "\n-+-+-\n" +
             board[3] + "|" + board[4] + "|" + board[5] + "\n-+-+-\n" +
             board[6] + "|" + board[7] + "|" + board[8] + "\n";
    return result;
}

bool isValidMove(std::string board, int cell) {
    return board[cell] == ' ';
}

bool isInValidMove(std::string board, int cell) {
    return board[cell] != ' ';
}

bool isPlayerTurn(int turnCount, char symbol) {
    // convertedSymbolo = Convert symbol to '0' or '1'
    return ((turnCount % 2 == 0 && symbol == '0') || (turnCount % 2 == 1 && symbol == '1')); 
    //Note to self: modded with 2 to get remainder 0 or 1
}

bool isPlayerATurn(int turnCount) {
    return turnCount % 2 == 0;
}

bool isPlayerBTurn(int turnCount){
    return turnCount % 2 == 1;
}

bool rowCheck(std::string board, int row, char symbol) {
    // get contents of the first cell in the provided row
    int start = row * 3;
    // Does the contents match symbol ==? boolean
    return (board[start] == symbol && board[start + 1] == symbol && board[start + 2] == symbol);
        //true
            //get contents of the second cell in the provided row
            //does the content match the symbol?
            //get contents of the third cell in the provided row
            //does contents match the symbol
                //return true
        //false
}

bool colCheck(std::string board, int col, char symbol) {
    // Does the contents match symbol ==? boolean
    return (board[col] == symbol && board[col + 3] == symbol && board[col + 6] == symbol);
}

bool checkAllRows(std::string board, char symbol) {
    return (rowCheck(board, 0, symbol) || rowCheck(board, 1, symbol) || rowCheck(board, 2, symbol));
}

bool checkAllCols(std::string board, char symbol){
    return (colCheck(board, 0, symbol) || colCheck(board, 1, symbol) || colCheck(board, 2, symbol));
}

bool upwardDiagonalCheck(std::string board, char symbol){
    return (board[6] == symbol && board[4] == symbol && board[2] == symbol);
}

bool downwardDiagonalCheck(std::string board, char symbol) {
    return (board[0] == symbol && board[4] == symbol && board[8] == symbol);
}

bool isAWinner(std::string board) {
    return (checkAllRows(board, '0') || checkAllCols(board, '0') || 
            upwardDiagonalCheck(board, '0') || downwardDiagonalCheck(board, '0'));
}

bool isBWinner(std::string board) {
    return (checkAllRows(board, '1') || checkAllCols(board, '1') || 
            upwardDiagonalCheck(board, '1') || downwardDiagonalCheck(board, '1'));
}

bool boardFull(std::string board) {
    return (board[0] != ' ' && board[1] != ' ' && board[2] != ' ' &&
        board[3] != ' ' && board[4] != ' ' && board[5] != ' ' &&
        board[6] != ' ' && board[7] != ' ' && board[8] != ' ');
}

bool gameOver(std::string board) {
    return (isAWinner(board) || isBWinner(board) || boardFull(board));
}
