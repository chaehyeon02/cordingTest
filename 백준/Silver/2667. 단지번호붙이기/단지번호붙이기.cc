#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool map[25][25];
int n, cnt;

void CountHouse(int a, int b) {
	if (!map[a][b]) return;
	map[a][b] = false;
	cnt++;

	if (a != 0) CountHouse(a - 1, b);
	if (a != n - 1) CountHouse(a + 1, b);
	if (b != 0) CountHouse(a, b - 1);
	if (b != n - 1) CountHouse(a, b + 1);

	return;
}

int main() {
	vector<int> houseCnt;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char tmp;
			cin >> tmp;
			if (tmp == '1') map[i][j] = true;
			else map[i][j] = false;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j]) {
				cnt = 0;
				CountHouse(i, j);
				houseCnt.push_back(cnt);
			}
		}
	}

	sort(houseCnt.begin(), houseCnt.end());
	cout << houseCnt.size() << "\n";
	for (int i = 0; i < houseCnt.size(); i++) cout << houseCnt[i] << "\n";

	return 0;
}