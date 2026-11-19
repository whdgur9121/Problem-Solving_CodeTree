#include <iostream>

using namespace std;

int a, b;

int func(int a) {
    if(a % 2 == 0) return 0;
    if(a % 10 == 5) return 0;
    if(a % 3 == 0 && a % 9 != 0) return 0;
    return 1;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    int cnt = 0;
    for(int i = a; i<b+1; i++) {
        cnt += func(i);
    }

    cout << cnt << endl;

    return 0;
}