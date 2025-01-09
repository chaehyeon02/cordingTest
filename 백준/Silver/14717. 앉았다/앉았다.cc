#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(3);

    int a, b, cnt = 0;
    cin >> a >> b;

    if (a == b) {
        cout << 1 - (10 - (double)a) / 153;
    }
    else {
        for (int i = 1; i <= 10; i++) {
            for (int j = i + 1; j <= 10; j++) {
                if (i == j) continue;
                if ((i + j) % 10 < (a + b) % 10) {
                    if (a != i && b != j && a != j && b != i) cnt += 4;
                    else cnt += 2;
                }
            }
        }
        cout << (double)cnt / 153;
    }

    return 0;
}