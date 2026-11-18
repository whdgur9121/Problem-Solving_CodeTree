#include <iostream>

using namespace std;

int n, m;

int gcd(int a, int b) {
    if(b > a ) {
        int temp = a;
        a = b;
        b = temp;
    }
    if(a % b == 0) return b;
    int r = a % b;
    return gcd(b, r);
}

int func(int a, int b) {
    int gcd_num = gcd(a, b);

    int tot = a / gcd_num * b;
    return tot;
}

int main() {
    cin >> n >> m;

    // Please write your code here.

    int ans = func(n, m);

    cout << ans << endl;

    return 0;
}