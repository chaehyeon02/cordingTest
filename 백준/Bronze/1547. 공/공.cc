#include <iostream>
using namespace std;

int main() {
    int cups[3] = {1, };
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        swap(cups[a - 1], cups[b - 1]);
    }

    for (int i = 0; i < 3; i++) {
        if (cups[i] == 1) {
            cout << i + 1;
            break;
        }
    }

    return 0;
}