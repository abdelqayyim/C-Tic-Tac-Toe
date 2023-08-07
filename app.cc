#include <iostream>
#include <vector>

class TicTacToe {
private:
    std::vector<std::vector<char>> board;
    char currentPlayer;

public:
    TicTacToe() : board(3, std::vector<char>(3, ' ')), currentPlayer('X') {}

    void printBoard() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                std::cout << board[i][j];
                if (j < 2) std::cout << " | ";
            }
            std::cout << std::endl;
            if (i < 2) std::cout << "---------" << std::endl;
        }
        std::cout << std::endl;
    }

    bool makeMove(int row, int col) {
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            return false;
        }
        board[row][col] = currentPlayer;
        return true;
    }

    bool checkWin() {
        // Check rows, columns, and diagonals for a win
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
                return true;
            }
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
                return true;
            }
        }
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
            return true;
        }
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
            return true;
        }
        return false;
    }

    bool isBoardFull() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    void play() {
        int row, col;
        while (true) {
            printBoard();
            std::cout << "Player " << currentPlayer << ", enter row and column (0-2) separated by space: ";
            std::cin >> row >> col;

            if (makeMove(row, col)) {
                if (checkWin()) {
                    printBoard();
                    std::cout << "Player " << currentPlayer << " wins!" << std::endl;
                    break;
                } else if (isBoardFull()) {
                    printBoard();
                    std::cout << "It's a draw!" << std::endl;
                    break;
                } else {
                    switchPlayer();
                }
            } else {
                std::cout << "Invalid move. Try again." << std::endl;
            }
        }
    }
};

int main() {
    TicTacToe game;
    game.play();
    return 0;
}