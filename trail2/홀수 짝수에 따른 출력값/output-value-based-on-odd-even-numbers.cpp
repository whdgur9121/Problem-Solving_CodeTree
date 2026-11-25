#include <iostream>
using namespace std;

int add(int n) {
    if(n == 2 || n == 1) return n;
    int cnt = 0;
    cnt = n + add(n-2);
    return cnt;
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    int ans = add(n);

    cout << ans << endl;
    return 0;
}