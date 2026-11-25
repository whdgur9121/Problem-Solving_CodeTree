#include <iostream>
using namespace std;

int cnt;

void func(int Number) {
    if(Number == 1) return;
    cnt++;
    if(Number % 2 == 0) func(Number/2);
    else func(Number/3);
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;

    cnt = 0;

    func(N);

    cout << cnt << endl;
    return 0;
}