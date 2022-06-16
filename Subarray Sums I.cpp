#include <iostream>
using namespace std;
int main(){
    int length, target;
    cin >> length >> target;
    int input[length];
    int t;
    int p = 0;
    int output = 0;
    for (int i = 0; i < length; i++) {
        cin >> t;
        input[i] = t;
        int l = i;
        int s = 0;
        while (l >= 0){
            s += input[l];
            if (s == target){
                output++;
                break;
            }
            else if (s < target){
                l--;
            }
            else {
                break;
            }
        }
    }
    cout << output;
}
//2 6 7 9 16