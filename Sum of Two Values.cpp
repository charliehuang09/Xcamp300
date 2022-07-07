#include <iostream>
#include <map>
using namespace std;

int main(){
    long long int length, target, t;
    cin >> length >> target;
    map<long long int, long long int> map;

    for (long long int i = 0; i < length; i++) {
        cin >> t;
        if (map[t] != 0){
            cout << map[t] << " " << i + 1;
            return 0;
        }
        map[target - t] = i + 1;
    }

    cout << "IMPOSSIBLE";
}