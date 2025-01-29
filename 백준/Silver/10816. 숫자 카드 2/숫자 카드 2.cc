#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, x;
	map<int, int> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		arr[x]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x;
		cout << arr[x] << " ";
	}

	return 0;
}