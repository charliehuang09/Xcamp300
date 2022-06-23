#include <iostream>
#include<map>

using namespace std;
int main(){
    int length, target, t;
    cin >> length >> target;
    length++;
    int psum[length];
    map<int, int> map;
    psum[0] = 0;
    for (int i = 1; i < length; i++){
        cin >> t;
        psum[i] = psum[i - 1] + t;
    }

    int output = 0;
    for (int i = 1; i < length; i++){
        map[psum[i]] = - (target - psum[i]);
        if (map.find(- (target - psum[i])) != map.end()){
            output++;
        }
        if (psum[i] == target){
            output++;
        }
    }
    cout << output;

    return 0;
}