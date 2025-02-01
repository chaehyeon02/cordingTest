#include <iostream>
#include <algorithm>
using namespace std;

int money[1500002] = { 0, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t, p;
    int maxMoney = 0, curMax = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t >> p;
        if (curMax < money[i]) curMax = money[i];
        if (i + t > n + 1) continue;
        if (money[i + t] < curMax + p) money[i + t] = curMax + p;
    }

    for (int x : money) {
        if (x > maxMoney) maxMoney = x;
    }
    cout << maxMoney;

    return 0;
}