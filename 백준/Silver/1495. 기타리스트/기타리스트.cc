#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
    
	int n, s, m;
	vector<int> volume;
	vector<vector<int>> dp;

    int maxVolume = -1;
    cin >> n >> s >> m;
    volume.resize(n + 1, 0);
    dp.resize(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        cin >> volume[i];
    }
    dp[0][s] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (dp[i - 1][j] == 1) {
                if (j + volume[i] <= m) {
                    dp[i][j + volume[i]] = 1;
                }
                if (j - volume[i] >= 0) {
                    dp[i][j - volume[i]] = 1;
                }
            }
        }
    }
    for (int i = 0; i <= m; i++) {
        if (dp[n][i] == 1) {
            maxVolume = max(maxVolume, i);
        }
    }
    cout << maxVolume;

}