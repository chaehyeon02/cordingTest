#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, tmp;
    set<int> cardN;
    vector<int> cardM;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        cardN.insert(tmp);
    }

    cin >> m;
    cardM.resize(m);
    for (int i = 0; i < m; i++) {
        cin >> cardM[i];
    }

    for (int x : cardM) cout << cardN.count(x) << " ";

    return 0;
}