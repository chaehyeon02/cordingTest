#include <iostream>
using namespace std;

bool farm[50][50] = { false };
int n, m;

void CheckAround(int y, int x) {
	if (farm[y][x] == false) return;
	farm[y][x] = false;

	if (y != 0) CheckAround(y - 1, x);
	if (y != n - 1) CheckAround(y + 1, x);
	if (x != 0) CheckAround(y, x - 1);
	if (x != m - 1) CheckAround(y, x + 1);
}

int main() {
	int t, k;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> m >> n >> k;
		for (int j = 0; j < k; j++) {
			int x, y;
			cin >> x >> y;
			farm[y][x] = true;
		}

		int worm = 0;
		for (int y = 0; y < n; y++) {
			for (int x = 0; x < m; x++) {
				if (farm[y][x] == true) {
					CheckAround(y, x);
					worm++;
				}
			}
		}
		cout << worm << "\n";
	}

	return 0;
}