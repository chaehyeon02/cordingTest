#include <iostream>
#include <algorithm>
using namespace std;

int n;
int t[15];
int p[15];
int profit[15] = {};

void FindMax() {
	int max_profit;
	for (int i = 0; i <= n; i++) {
		profit[i] = max(max_profit, profit[i]);
		if (t[i] + i <= n) {
			profit[t[i] + i] = max(profit[t[i] + i], p[i] + profit[i]);
		}
		max_profit = max(max_profit, profit[i]);
	}
	cout << max_profit;
}

int main() {
	cin >> n;
    for (int i = 0; i < n; i++) cin >> t[i] >> p[i];
	
	FindMax();

	return 0;
}