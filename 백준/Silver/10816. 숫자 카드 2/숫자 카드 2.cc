#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, x;
	int arr[500000];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		arr[i] = x;
	}
	sort(arr, arr + n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x;
		cout << upper_bound(arr, arr + n, x) - lower_bound(arr, arr + n, x) << " ";
	}

	return 0;
}