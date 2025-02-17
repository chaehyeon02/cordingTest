#include<string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> brackets;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') brackets.push(s[i]);
        else if (s[i] == ')') {
            if(brackets.empty()) {
                answer = false;
                break;
            }
            else brackets.pop();
        }
    }
    
    if(!brackets.empty()) answer = false;

    return answer;
}