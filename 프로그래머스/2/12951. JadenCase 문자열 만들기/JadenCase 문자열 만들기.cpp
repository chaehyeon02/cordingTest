#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    bool word = false;
    
    if(s[0] > 90) s[0] -= 32;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == ' ') word = true;
        else if(word) {
            if(s[i] > 90) s[i] -= 32;
            word = false;
        }
        else if (s[i] > 64 && s[i] < 91) s[i] += 32;
    }
    
    return s;
}