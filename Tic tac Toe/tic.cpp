#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char player = 'X';

void drawBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------" << endl;
    }
}

void switchPlayer() {
    player = player == 'X' ? 'O' : 'X';
}

bool makeMove(int position) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;
    if (board[row][col] == 'X' || board[row][col] == 'O') {
        return false;
    }
    board[row][col] = player;
    return true;
}

bool checkForWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return true;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return true;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true;
    }
    return false;
}

int main() {
    int position;
    drawBoard();
    while (true) {
        cout << "Player " << player << ", enter a number (1-9): ";
        cin >> position;
        if (makeMove(position)) {
            drawBoard();
            if (checkForWin()) {
                cout << "Player " << player << " wins!" << endl;
                break;
            }
            switchPlayer();
        } else {
            cout << "That space is already occupied. Try again." << endl;
        }
    }
    return 0;
}
