#include <iostream>
#include <vector>
using namespace std;

int findTriangle(vector<int> &v) {
    int n;
    cin >> n;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            for (int k = 0; k < v.size(); k++) {
                if (v[i] + v[j] + v[k] == n) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    vector<int> v = { 1 };
    int cnt;

    //1000이하의 모든 삼각수
    for (int i = 1; v[i - 1] < 1000; i++) {
        v.push_back((i + 1) * (i + 2) / 2);
    }

    cin >> cnt;
    for (int i = 0; i < cnt; i++) {
        cout << findTriangle(v) << "\n";
    }

    return 0;
}