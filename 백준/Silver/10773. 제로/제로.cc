#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int k;
	vector<int> arr;
	cin >> k;

	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		if (n == 0) arr.pop_back();
		else arr.push_back(n);
	}

	int sum = 0;
	for (int i : arr) {
		sum += i;
	}
	cout << sum;

	return 0;
}