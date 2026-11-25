#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
int Max;
int n;

void findMax(int now) {
    if(now == n ) return;
    if(arr[now] > Max) Max = arr[now];
    findMax(now+1);
}

int main() {
    // Please write your code here.
    cin >> n;
    Max  = 0;
    arr.resize(n, 0);

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    findMax(0);

    cout << Max << endl;

    return 0;
}