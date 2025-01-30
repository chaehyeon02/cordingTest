#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int arr[1000];
	cin >> n;

	arr[0] = 1;
	arr[1] = 2;
	for (int i = 2; i < n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}
	cout << arr[n - 1];

	return 0;
}