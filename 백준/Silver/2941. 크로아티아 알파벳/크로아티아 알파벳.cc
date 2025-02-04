#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int cnt = 0, a_cnt = 0;
    string s;
    string croatia[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    cin >> s;

    for (int i = 0; i < 8; i++) {
        while (1) {
            if (s.find(croatia[i]) != -1) s.replace(s.find(croatia[i]) , croatia[i].length(), "#");
            else break;
        }
    }
    cout << s.length();

    return 0;
}