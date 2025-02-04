#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, num;
    string s;
    stack<int> result;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "push") {
            cin >> num;
            result.push(num);
        }

        else if (s == "pop") {
            if (result.empty()) cout << "-1\n";
            else {
                cout << result.top() << "\n";
                result.pop();
            }
        }

        else if (s == "size") cout << result.size() << "\n";

        else if (s == "empty") {
            if (result.empty()) cout << "1\n";
            else cout << "0\n";
        }

        else if (s == "top") {
            if (result.empty()) cout << "-1\n";
            else cout << result.top() << "\n";
        }
    }

    return 0;
}