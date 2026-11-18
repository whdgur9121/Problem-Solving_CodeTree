#include <iostream>

using namespace std;

int n, m;

void gcd(int n, int m) {
    if(n % m == 0) {
        cout << m << endl;
        return;
    }
    int r = n % m;
    gcd(m, r);
}

int main() {
    cin >> n >> m;

    // Please write your code here.

    if(n > m) gcd(n, m);
    else gcd(m, n);

    return 0;
}