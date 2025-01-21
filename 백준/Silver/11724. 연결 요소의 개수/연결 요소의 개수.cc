#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> edges[1001];
bool visitNode[1001] = { false }; //방문여부

void dfs(int v) {
	visitNode[v] = true;

	for (int i = 0; i < edges[v].size(); i++) {
		if (!visitNode[edges[v][i]]) dfs(edges[v][i]);;
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}

	int groupCnt = 0;
	for (int i = 1; i <= n; i++) {
		if (!visitNode[i]) {
			dfs(i);
			groupCnt++;
		}
	}
	cout << groupCnt;

	return 0;
}
