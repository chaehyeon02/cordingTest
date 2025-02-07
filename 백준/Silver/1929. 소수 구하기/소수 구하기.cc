#include <iostream>
#include <cmath>
using namespace std;

int arr[1000001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n;

    cin >> m >> n;
    for (int i = 1; i <= n; i++) arr[i] = i;
    
    for (int i = 2; i <= n; i++) {
        if (arr[i] == 0) continue;
        for (int j = 2; i * j <= n; j++) arr[i * j] = 1;
    }
    for (int i = m; i <= n; i++)
        if (arr[i] != 1) cout << i << "\n";

    return 0;
}