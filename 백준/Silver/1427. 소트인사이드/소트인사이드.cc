#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    vector<int> v;
    cin >> s;

    for (int i = 0; i < s.length(); i++) v.push_back(s[i] - 48);
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < s.length(); i++) cout << v[i];

    return 0;
}