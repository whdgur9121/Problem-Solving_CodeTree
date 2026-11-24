#include <iostream>
using namespace std;

int n;

void func(bool now, int cnt) {
    if(cnt == 0) {
        cnt++;
        now = !now;
    }
    if(cnt > n) return;

    for(int i = 0; i<cnt; i++) cout << "* ";
    cout << endl;
    if(now) func(now, cnt-1);
    else func(now, cnt+1);
}

int main() {
    // Please write your code here.
    cin >> n;

    func(1, n);
    return 0;
}