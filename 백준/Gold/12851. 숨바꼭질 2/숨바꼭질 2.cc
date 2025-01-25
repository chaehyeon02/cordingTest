#include <iostream>
#include <queue>
using namespace std;

void bfs(int n, int k) {
	int time, cnt = 0;
	queue<pair<int, int>> q;
	bool visitNum[100001] = { false };

	q.push(make_pair(n, 0));
	while (!q.empty()) {
		if (q.front().first == k) {
			time = q.front().second;
			break;
		}

		visitNum[q.front().first] = true;
		if (q.front().first - 1 > -1 && q.front().first - 1 < 100001) {
			if (!visitNum[q.front().first - 1]) q.push(make_pair(q.front().first - 1, q.front().second + 1));
		}
		if (q.front().first + 1 > -1 && q.front().first + 1 < 100001) {
			if (!visitNum[q.front().first + 1]) q.push(make_pair(q.front().first + 1, q.front().second + 1));
		}
		if (q.front().first * 2 > -1 && q.front().first * 2 < 100001) {
			if (!visitNum[q.front().first * 2]) q.push(make_pair(q.front().first * 2, q.front().second + 1));
		}
		q.pop();
	}

	for (int i = 0; i < q.size(); i++) {
		if (q.front().first == k && q.front().second == time) cnt++;
		q.pop();
	}

	cout << time << "\n";
	cout << cnt;
	return;
}

int main() {
	int n, k;
	cin >> n >> k;

	bfs(n, k);

	return 0;
}