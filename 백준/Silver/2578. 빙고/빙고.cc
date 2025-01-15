#include <iostream>
using namespace std;

int board[5][5];

bool CheckBingo() {
    int totalBingo = 0;

    int right = 0, left = 0;
    for (int i = 0; i < 5; i++) {
        int row = 0, col = 0;
        for (int j = 0; j < 5; j++) {
            if (board[i][j] == 0) row++;
            if (board[j][i] == 0) col++;
            if (i == j && board[i][j] == 0) right++;
            if (i + j == 4 && board[i][j] == 0) left++;
        }

        if (row == 5) totalBingo++;
        if (col == 5) totalBingo++;
        if (right == 5) totalBingo++;
        if (left == 5) totalBingo++;

        if (totalBingo >= 3) return true;
    }
    return false;
}

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) cin >> board[i][j];
    }

    for (int i = 0; i < 25; i++) {
        int n;
        cin >> n;
        for (int k = 0; k < 5; k++) {
            for (int l = 0; l < 5; l++) {
                if (board[k][l] == n) {
                    board[k][l] = 0;
                    if (CheckBingo()) {
                        cout << i + 1;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}