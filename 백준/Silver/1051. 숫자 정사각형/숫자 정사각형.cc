#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n, m, size, ans = 1;
    int square[50][50];
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            square[i][j] = (int)s[j] - 48;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int k = 1; k < n - i && k < m - j; k++) {
                if (square[i][j] == square[i + k][j] && square[i][j] == square[i][j + k] && square[i][j] == square[i + k][j + k]) {
                    if (ans < (k + 1) * (k + 1)) {
                        ans = (k + 1) * (k + 1);
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}