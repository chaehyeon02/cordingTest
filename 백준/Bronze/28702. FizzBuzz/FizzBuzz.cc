#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s[3];
    int idx, num;
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
        if (isdigit(s[i][0])) idx = i;
    }

    num = stoi(s[idx]) + (3 - idx);
    if (num % 3 == 0 && num % 5 == 0) cout << "FizzBuzz";
    else if (num % 3 == 0) cout << "Fizz";
    else if (num % 5 == 0) cout << "Buzz";
    else cout << num;

    return 0;
}