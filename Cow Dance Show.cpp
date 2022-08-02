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
int input[132132323];

int get_time(int x, int length){
    priority_queue<int, vector<int>, greater<int> > q;
    for (int i = 0; i < length; i++){
        q.push(input[i]);
    }
    int array[x];
    memset(array, 0, sizeof(array));
    int index = 0;
    while (!q.empty()){
        array[index] = q.top();
        q.pop();
        index %= length;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int length, target;
    int l = 0;
    int r = 0;
    for (int i = 0; i < length; i++){
        cin >> input[i];
        r = max(r, input[i]);
    }

    while(r - l > 1){
        int mid = (r + l) / 2;
    }








}