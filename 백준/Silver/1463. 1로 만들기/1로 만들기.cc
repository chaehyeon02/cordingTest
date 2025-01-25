#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	//int arr[1000001];
	vector<int> dp = { 0, 0, 1, 1 };
	cin >> n;

	/*arr[0] = 0;
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;*/

	for (int i = 4; i <= n; i++) {
		//dp.push = dp[i - 1] + 1;
		dp.push_back(dp[i - 1] + 1);
		if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
	}
	cout << dp[n];

	return 0;
}

//틀린 코드
//int main() {
//	int x, cnt = 0;
//	cin >> x;
//
//	while (x > 1) {
//		if (x % 3 == 0 && x / 3 != 0) x /= 3;
//		else if (x % 2 == 0 && x / 2 != 0) x /= 2;
//		else x -= 1;
//		cnt++;
//		cout << x << "\n";
//	}
//	cout << "답: " << cnt;
//
//	return 0;
//}

/*
1. 그냥 while문 써서 답 안나옴
2. int arr[1000001]; 썼더니 오류뜨고 실행안됨 -> 배열의 최대 크기는 보통 10^5라서
    그래서 벡터로 고침
*/