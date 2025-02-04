#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    map<string, string> pokemons;
    vector<string> names(n);

    for (int i = 1; i <= n; i++) {
        cin >> names[i - 1];
        pokemons.insert(make_pair(names[i - 1], to_string(i)));
    }

    for (int i = 0; i < m; i++) {
        string question;
        cin >> question;
        if (question[0] > 64 && question[0] < 91) cout << pokemons[question] << "\n";
        else {
            cout << names[stoi(question) - 1] << "\n";
        }
    }

    return 0;
}