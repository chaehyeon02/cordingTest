#include <iostream>
using namespace std;

int main() {
	int n;
	long long fibonacci[91];
	cin >> n;

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (int i = 2; i <= n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	cout << fibonacci[n];

	return 0;
}