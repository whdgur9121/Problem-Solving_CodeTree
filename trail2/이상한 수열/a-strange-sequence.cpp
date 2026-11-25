#include <iostream>
using namespace std;

int func(int index) {
    if(index == 1) return 1;
    if(index == 2) return 2;
    int cnt = func(index/3) + func(index-1);
    return cnt;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int ans = func(n);
    cout << ans << endl;
    return 0;
}