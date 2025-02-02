#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    map<string, string, greater<string>> people;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        people[s1] = s2;
    }

    for (pair<string, string> p : people) {
        if (p.second == "enter") cout << p.first << "\n";
    }

    return 0;
}