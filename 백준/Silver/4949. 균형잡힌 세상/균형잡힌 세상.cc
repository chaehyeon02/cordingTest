#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string s = "", ans;

    while (1) {
        stack<char> brackets;
        getline(cin, s);
        ans = "yes";
        if (s.compare(".") == 0) break;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[') brackets.push(s[i]);
            else if (s[i] == ')') {
                if (!brackets.empty() && brackets.top() == '(') brackets.pop();
                else {
                    ans = "no";
                    break;
                }
            }
            else if (s[i] == ']') {
                if (!brackets.empty() && brackets.top() == '[') brackets.pop();
                else {
                    ans = "no";
                    break;
                }
            }
        }

        if (!brackets.empty()) ans = "no";
        cout << ans << "\n";
    }

    return 0;
}