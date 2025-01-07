#include <iostream>
#include <algorithm>
using namespace std;

int findFake(int dwarfs[], int fake[], int sum) {
    for (fake[0] = 0; fake[0] < 8; fake[0]++) {
        for (fake[1] = 1; fake[1] < 9; fake[1]++) {
            if (sum - dwarfs[fake[0]] - dwarfs[fake[1]] == 100) return 0;
        }
    }
    return 0;
}

int main() {
    int dwarfs[9], fake[2];
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> dwarfs[i];
        sum += dwarfs[i];
    }

    sort(dwarfs, dwarfs + 9);
    findFake(dwarfs, fake, sum);

    for (int i = 0; i < 9; i++) {
        if (i == fake[0] || i == fake[1]) continue;
        cout << dwarfs[i] << " ";
    }

    return 0;
}