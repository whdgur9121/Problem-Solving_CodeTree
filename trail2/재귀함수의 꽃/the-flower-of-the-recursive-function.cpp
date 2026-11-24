#include <iostream>
using namespace std;

int N;

void func2(int cnt) {
    if(cnt > N) {
        return;
    }
    cout << cnt << " ";
    func2(cnt+1);
}

void func(int cnt) {
    if(cnt == 0) {
        func2(cnt+1);
        return;
    }
    cout << cnt << " ";
    func(cnt-1);
}

int main() {
    // Please write your code here.
    cin >> N;

    func(N);

    return 0;
}