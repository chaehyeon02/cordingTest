#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, max = 0, mode;
    double average = 0;
    vector<int> numbers;
    int freq[8001] = { 0 };
    bool firstNum = false; 

    cin >> n;
    numbers.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        average += numbers[i]; 
        freq[numbers[i] + 4000] += 1;
    }
    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < 8001; i++) {
        if (max < freq[i]) max = freq[i];
    }

    for (int i = 0; i < 8001; i++) {
        if (freq[i] == max) {
            mode = i - 4000;
            if (firstNum) break;
            else firstNum = true;
        }
    }

    cout << floor(average / n + 0.5) << "\n";
    cout << numbers[n / 2] << "\n";
    cout << mode << "\n";
    cout << numbers[n - 1] - numbers[0] << "\n";

    return 0;
}