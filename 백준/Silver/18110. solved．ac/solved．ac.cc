#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, start, back;
    long double average = 0;

    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }

    vector<int> levels(n);
    for (int i = 0; i < n; i++) cin >> levels[i];

    sort(levels.begin(), levels.end());

    start = round(n * 0.15);
    back = n - start;
    for (int i = start; i < back; i++) average += levels[i];

    cout << round(average / (back - start));

    return 0;
}