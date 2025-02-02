#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, cnt = 0;
    set<string> words;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        words.insert(s);
    }

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        if (words.find(s) != words.end()) cnt++;
    }
    cout << cnt;

    return 0;
}