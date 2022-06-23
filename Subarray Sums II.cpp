#include <iostream>
#include<map>

using namespace std;
int main(){
    int length, target, t;
    cin >> length >> target;
    length++;
    int psum[length];
    map<long int, long int> map;
    psum[0] = 0;
    for (int i = 1; i < length; i++){
        cin >> t;
        psum[i] = psum[i - 1] + t;
    }

//    map[0] = 1;

    long int output = 0;
    for (int i = 1; i < length; i++){
//        cout << - (target - psum[i]) << "\n";
        map[psum[i]]++;
        if (map.find(- (target - psum[i])) != map.end()){
            output += map[- (target - psum[i])];
        }

        if (psum[i] == target && target != 0){
            output++;
        }

    }
    cout << "\n" << output;

    return 0;
}