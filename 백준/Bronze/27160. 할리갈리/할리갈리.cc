#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;
	map<string, int> cards;
	cin >> num;

	for (int i = 0; i < num; i++) {
		string s;
		int n;
		cin >> s >> n;
		cards[s] += n;
	}

	string ans = "NO";
	for (auto iter : cards) {
		if (iter.second == 5) {
			ans = "YES";
			break;
		}
	}
	cout << ans;

	return 0;
}