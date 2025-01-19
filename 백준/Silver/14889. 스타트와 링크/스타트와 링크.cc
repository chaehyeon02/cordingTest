#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int n, minDiff = 100;
int ability[20][20];
vector<int> teamA;

void makeTeam(int member) {
	teamA.push_back(member);
	//팀원 n/2명
	if (teamA.size() == n / 2) {
		vector<int> teamB;
		int abilityA = 0, abilityB = 0;
		for (int i = 0; i < n; i++) { //teamB 만들기
			if (find(teamA.begin(), teamA.end(), i) == teamA.end()) {
				teamB.push_back(i);
			}
		}

		for (int i = 0; i < n / 2; i++) {
			for (int j = 0; j < n / 2; j++) {
				abilityA += ability[teamA[i]][teamA[j]];
				abilityB += ability[teamB[i]][teamB[j]];
			}
		}

		if (abs(abilityA - abilityB) < minDiff) minDiff = abs(abilityA - abilityB);
		return;
	}

	//팀원 더 모으기
	for (int i = member + 1; i < n; i++) {
		makeTeam(i);
		teamA.pop_back();
	}
	return;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> ability[i][j];
	}

	for (int i = 0; i < n; i++) {
		makeTeam(i);
		teamA.pop_back();
	}
	cout << minDiff;

	return 0;
}