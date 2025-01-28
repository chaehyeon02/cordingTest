#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> dp = { 0, 0, 1, 1 };
	cin >> n;

	for (int i = 4; i <= n; i++) {
		//dp.push = dp[i - 1] + 1;
		dp.push_back(dp[i - 1] + 1);
		if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
	}
	cout << dp[n];

	return 0;
}
