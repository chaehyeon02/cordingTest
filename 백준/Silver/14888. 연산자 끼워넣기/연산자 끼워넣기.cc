#include <iostream>
#include <vector>
using namespace std;

int n;
int maxAns = -1000000000, minAns = 1000000000;
vector<int> numbers;
int operators[4]; //+ - * /

void insertOperator(int ans, int cnt) {
	//순서대로 모두 선택
	if (cnt == n - 1) {
		if (ans < minAns) minAns = ans;
		if (ans > maxAns) maxAns = ans;
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (operators[i] > 0) {
			operators[i]--;
			if (i == 0)
				insertOperator(ans + numbers[cnt + 1], cnt + 1);
			else if (i == 1)
				insertOperator(ans - numbers[cnt + 1], cnt + 1);
			else if (i == 2)
				insertOperator(ans * numbers[cnt + 1], cnt + 1);
			else 
				insertOperator(ans / numbers[cnt + 1], cnt + 1);
			operators[i]++;
		}
	}
}

int main() {
	cin >> n;

	numbers.resize(n);
	for (int i = 0; i < n; i++) cin >> numbers[i];
	for (int i = 0; i < 4; i++) cin >> operators[i];
	insertOperator(numbers[0], 0);
	cout << maxAns << "\n" << minAns;

	return 0;
}