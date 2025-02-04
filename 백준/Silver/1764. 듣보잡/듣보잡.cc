#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    string tmp;
    set<string> listen, both;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        listen.insert(tmp);
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        if (listen.find(tmp) != listen.end()) both.insert(tmp);
    }

    cout << both.size() << "\n";
    for (string b : both) cout << b << "\n";

    return 0;
}