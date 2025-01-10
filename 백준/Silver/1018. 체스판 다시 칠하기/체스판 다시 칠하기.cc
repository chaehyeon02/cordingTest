#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 0, ans = 64; //세로 가로
    char board[50][50];
    char original[9][8] = {
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W', 
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B', 
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'
    };
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> board[i][j];
    }

    for (int i = 0; i <= n - 8; i++) { //입력받은 보드에서 위치 옮겨가며 확인
        for (int j = 0; j <= m - 8; j++) {

            int cntB = 0, cntW = 0;
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    if (board[i + k][j + l] != original[k][l]) cntB++;
                    if (board[i + k][j + l] != original[k + 1][l]) cntW++;
                }
            }
            
            if (cntB < cntW) cnt = cntB;
            else cnt = cntW;

            if (cnt < ans) ans = cnt;
        }
    }

    cout << ans;

    return 0;
}