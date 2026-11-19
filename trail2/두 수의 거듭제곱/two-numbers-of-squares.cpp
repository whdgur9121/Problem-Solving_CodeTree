#include <iostream>

using namespace std;

int a, b;

long long func(int a, int b) {
    int mul  = a;
    while(--b) {
        a *= mul;
    }
    return a;
}

int main() {
    cin >> a >> b;

    // Please write your code here.

    long long ans = func(a, b);

    cout << ans;

    return 0;
}