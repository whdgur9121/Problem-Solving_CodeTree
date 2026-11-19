#include <iostream>

using namespace std;

int a;
int c;
char o;

int func(int a, int b, int o) {
    if(o == '+') return a+b;
    if(o == '-') return a-b;
    if(o == '/') return a/b;
    if(o == '*') return a*b;
    return -1;
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.

    int ans = func(a, c, o);
    if(ans == -1) cout << "False";
    else {
        cout << a << " " << o << " " << c << " = " << ans;
    }

    return 0;
}