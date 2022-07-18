#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int lights, inputs, k;
    cin >> lights >> k >> inputs;
//    k--;//CHANGED
    int input[lights + 1];
    memset(input, 0, sizeof(input));

    int t, sum = 0;
    for (int i = 0; i < inputs; i++){
        cin >> t;
        input[t] = 1;
    }

//    cout << "\n";
//    for (int i = 0; i < lights; i++){
//        cout << input[i] << " ";
//    }
//    cout << "\n\n";

    for (int i = 0; i <= k; i++){
        sum += input[i];
    }

//    cout << sum;

    int output = 2147483647;
    output = min(output, sum);
    for (int i = k + 1; i < lights; i++){
        sum -= input[i - k];
        sum += input[i];
//        cout << sum << "\n";
        output = min(output, sum);
    }

    cout << "\n" << output;

}