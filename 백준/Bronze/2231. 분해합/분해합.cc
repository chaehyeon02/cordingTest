#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i < n; i++) {
        int m = i;
        int sum = 0;
        while (m > 0) {
            sum += m % 10;
            m /= 10;
        }
        if (i + sum == n) {
            cout << i;
            return 0;
        }
    }

    cout << "0";

    return 0;
}