#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maximum = candles[0];
    int count = 0;

    for (int height : candles) {
        if (height > maximum) {
            maximum = height;
            count = 1;
        }
        else if (height == maximum) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> candles(n);

    for (int i = 0; i < n; i++) {
        cin >> candles[i];
    }

    cout << birthdayCakeCandles(candles);

    return 0;
}