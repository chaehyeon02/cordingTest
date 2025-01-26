#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int stairs[300];
	int score[300];
	cin >> n;

	for (int i = 1; i <= n; i++) cin >> stairs[i];

	score[1] = stairs[1];
	score[2] = stairs[1] + stairs[2];
	score[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3]);
	for (int i = 4; i <= n; i++) {
		score[i] = max(score[i - 2], score[i - 3] + stairs[i - 1]) + stairs[i];
	}
;	cout << score[n];
}

//이것도 3퍼에서 틀림
//int main() {
//	int n;
//	vector<int> stairs;
//	vector<pair<int, int>> sum;
//	cin >> n;
//
//	stairs.resize(n);
//	for (int i = 0; i < n; i++) cin >> stairs[i]; //입력
//
//	sum.push_back(make_pair(stairs[0], 1));
//	sum.push_back(make_pair(stairs[0]+ stairs[1], 2));
//	for (int i = 2; i < n; i++) {
//		if (sum[i - 1].second == 1 && sum[i - 1].first > sum[i - 2].first) {
//			sum.push_back(make_pair(sum[i - 1].first + stairs[i], 2));
//		}
//		else if (sum[i - 1].second == 1 && sum[i - 1].first == sum[i - 2].first) {
//			sum.push_back(make_pair(sum[i - 1].first + stairs[i], 1));
//		}
//		else sum.push_back(make_pair(sum[i - 2].first + stairs[i], 1));
//	}
//	cout << sum[n - 1].first;
//
//	return 0;
//}

//틀린코드 1: 3%에서 틀림
//int main() {
//	int n;
//	vector<int> stairs;
//	vector<pair<int, int>> sum;
//	cin >> n;
//
//	stairs.resize(n);
//	for (int i = 0; i < n; i++) cin >> stairs[i]; //입력
//
//	sum.push_back(make_pair(stairs[0], 1));
//	sum.push_back(make_pair(stairs[0] + stairs[1], 2));
//	for (int i = 2; i < n; i++) {
//		if (sum[i - 1].second == 1 && sum[i - 1].first > sum[i - 2].first) {
//			sum.push_back(make_pair(sum[i - 1].first + stairs[i], 2));
//		}
//		else sum.push_back(make_pair(sum[i - 2].first + stairs[i], 1));
//		cout << i << "번째 sum: " << sum[i].first << "\n";
//	}
//	cout << sum[n - 1].first;
//
//	return 0;
//}