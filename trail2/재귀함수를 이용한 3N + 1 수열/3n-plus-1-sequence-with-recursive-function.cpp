#include <iostream>
using namespace std;

int cnt = 0;

void func(int n) {
    if(n == 1) return;
    cnt++;
    if(n % 2 == 0) {
        func(n/2);
    }
    else {
        func(n*3 + 1);
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    func(n);

    cout << cnt << endl;

    return 0;
}