#include <iostream>

using namespace std;

int a, b, c;

int func(int a, int b, int c) {
    if(a <= b && a <= c) return a;
    if(b <= a && b <= c) return b;
    if(c <= a && c <= b) return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> a >> b >> c;

    // Please write your code here.

    int ans = func(a, b, c);
    cout << ans << endl;
    return 0;
}