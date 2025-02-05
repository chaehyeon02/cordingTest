#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int l, sum = 0;
    string s;
    cin >> l >> s;

    for (int i = 0; i < s.length(); i++) {
        sum += (long)((s[i] - 96) * pow(31, i)) % 1234567891;
    }

    cout << sum;

    return 0;
}