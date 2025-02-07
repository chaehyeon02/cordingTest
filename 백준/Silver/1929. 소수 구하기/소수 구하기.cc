#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        int max = sqrt(i);
        if (max == 1 && i != 1) cout << i << "\n";
        for (int j = 2; j <= max; j++) {
            if (i % j == 0) break;
            if (j == max) cout << i << "\n";
        }
    }

    return 0;
}