#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string bracket, ans;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> bracket;
        stack<bool> s;
        ans = "YES";
        for (int j = 0; j < bracket.length(); j++) {
            if (bracket[j] == '(') s.push(1);
            else {
                if (s.size() == 0) {
                    ans = "NO";
                    break;
                }
                else s.pop();
            }
        }
        if (s.size() != 0) ans = "NO";
        cout << ans << "\n";
    }

    return 0;
}