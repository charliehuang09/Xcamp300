#include <iostream>
using namespace std;
int main() {
    int length;
    cin >> length;
    int input[length + 1];
    input[0] = 0;
    int t;
    for (int i = 1; i <= length; i++){
        cin >> t;
        t += input[i - 1];
        t = t % 7;
        input[i] = t;
    }

    int minimum[7];
    int maximum[7];
    for (int i = 0; i < 7; i++){
        minimum[i] = 214748364;
        maximum[i] = -214748364;
    }

    for (int i = 0; i < length; i++){
        minimum[input[i]] = min(i, minimum[input[i]]);
        maximum[input[i]] = max(i, maximum[input[i]]);
    }

    int output = 0;
    for (int i = 0; i < length; i++){
        output = max(output, maximum[i] - minimum[i]);
    }
    cout << output;

    return 0;
}