#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n, minAns = 100;
int ability[20][20];
bool team[20] = {};

void FindMin(int member, int cnt) {
	vector<int> teamA;
	vector<int> teamB;
	int abilityA = 0, abilityB = 0;

	//팀이 다 찬 경우
	if (cnt == n / 2) {
		for (int i = 0; i < n; i++) {
			if (team[i]) teamA.push_back(i); //각 팀에 넣음
			else teamB.push_back(i);
		}
		for (int i = 0; i < n / 2; i++) {
			for (int j = 0; j < n / 2; j++) {
				abilityA += ability[teamA[i]][teamA[j]];
				abilityB += ability[teamB[i]][teamB[j]];
			}
		}
		if (abs(abilityA - abilityB) < minAns) minAns = abs(abilityA - abilityB);
		return;
	}

	//팀원을 더 골라야 하는 경우
	for (int i = member; i < n; i++) {
		if (team[i]) continue;
		else {
			team[i] = true;
			FindMin(i, cnt + 1);
			team[i] = false;
		}
	}
}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> ability[i][j];
	}
	FindMin(0, 0);
	cout << minAns;

	return 0;
}