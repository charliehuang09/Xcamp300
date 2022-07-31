//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//#define ll long long
//int wood(ll input, ll wood[], ll length){
//    ll output = 0;
//    for (int i = 0; i < length; i++){
//        if (wood[i] - input > 0){
//            output += wood[i] - input;
//        }
//    }
//    return output;
//}
//
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll length, target;
//    cin >> length >> target;
//    ll input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//    }
//    sort(input, input + length);
//    ll l = 0;
//    ll h = 2147483;
//    while (h - l > 1) {
//        int mid = (h + l) / 2;
//        if (wood(mid, input, length) > target) {
//            l = mid + 1;
//        }
//        else {
//            h = mid;
//        }
//    }
////    l--;
//    while(wood(l + 1, input, length) >= target)l++;
//    cout << l;
//}