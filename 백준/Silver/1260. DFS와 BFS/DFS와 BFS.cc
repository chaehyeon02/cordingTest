#include <iostream>
#include <queue>
using namespace std;

int n, m, v;
bool edge[1001][1001] = { false }; //간선
bool visitNode[1001] = { false }; //방문 여부

void dfs(int v) {
	cout << v << " ";
	visitNode[v] = true; //현재 노드 방문처리

	for (int i = 1; i <= n; i++) {
		if (edge[v][i] && !visitNode[i]) dfs(i);
	}
}

queue<int> q;
void bfs(int v) {
	visitNode[v] = true;

	q.push(v);
	while (!q.empty()) {
		for (int i = 1; i <= n; i++) {
			if (edge[q.front()][i] && !visitNode[i]) {
				q.push(i);
				visitNode[i] = true;
			}
		}
		cout << q.front() << " ";
		q.pop();
	}
}


int main() {
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		edge[a][b] = true;
		edge[b][a] = true;
	}
	dfs(v);
	cout << "\n";
	fill_n(visitNode, 1001, false);
	bfs(v);

	return 0;
}