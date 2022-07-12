#include <iostream>

using namespace std;
int main(){
    int length, target;
    cin >> length >> target;

    int input[length];
    for (int i = 0; i < length; i++){
        cin  >> input[i];
    }

    int output;

    for (int i = 0; i < length - 2; i++){
        int l = i + 1;
        int h = length - 1;
//        cout  << i << " " << l << " " << h << "\n";

        while (l != h){
            if (input[l] + input[h] + input[i] == target){
                cout << i + 1 << " " << l + 1 << " " << h + 1;
                return 0;
            }

            if (input[l] + input[h] + input[i] > 0){
                l++;
            }
            else{
                h--;
            }
        }
    }

    cout << "IMPOSSIBLE";

}
/*
4 8
2 7 5 1

0 2 3
*/
