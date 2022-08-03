#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
#define ll long long
using namespace std;
const string albert = "Albert is a Furry\n";
int length, cows, t, maximum = 0;
bool input[500000000];

bool is_valid(int x){
    int index = -x;
    for (int i = 0; i < cows; i++){
        index += x;
        while(input[index] != 1){
            index++;
            if (index > maximum){
                return false;
            }
        }
        if (index > maximum){
            return false;
        }
    }
    if (index > maximum){
        return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> length >> cows;
    int l = 0;
    int r = 0;
    for (int i = 0; i < length; i++){
        cin >> t;
        maximum = max(maximum, t);
        input[t] = 1;
    }
    r = maximum;
//    cout << maximum;
//    return 0;

    while(r - l > 1){
        int mid = (r + l) / 2;
        if (is_valid(mid)){
            l = mid;
//            cout << mid << " valid\n";
        }
        else{
            r = mid;
//            cout << mid << " not valid\n";
        }
    }
    cout << l;

}