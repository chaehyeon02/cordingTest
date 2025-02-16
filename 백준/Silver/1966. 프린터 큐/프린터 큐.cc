#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, m, ans;
    cin >> t;
    for (int i = 0; i < t; i++) {
        queue<pair<int, int>> q;
        ans = 1;
        cin >> n >> m;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            q.push(make_pair(tmp, j));
        }

        while (1) {
            int maxNum = 0;
            for (int j = 0; j < q.size(); j++) {
                maxNum = max(maxNum, q.front().first);
                q.push(make_pair(q.front().first, q.front().second));
                q.pop();
            }
            if (q.front().first != maxNum) {
                q.push(make_pair(q.front().first, q.front().second));
                q.pop();
            }
            else {
                if (m == q.front().second) break;
                q.pop();
                ans += 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}