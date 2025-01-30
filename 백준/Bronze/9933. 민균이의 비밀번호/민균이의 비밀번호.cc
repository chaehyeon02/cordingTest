#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	string password;
	unordered_map<string, int> words;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> password;
		words[password] = password.length();
		
		reverse(password.begin(), password.end());
		if (words.find(password) != words.end()) break;
	}
	cout << password.length() << " " << password[password.length() / 2];

	return 0;
}