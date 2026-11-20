#include <iostream>
using namespace std;

void func(int* a, int* b) {
    if(*a > *b) {
        *a *=2;
        *b += 10;
        return;
    }
    *b *=2;
    *a += 10;
    return;
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b;
    cin >> a >> b;

    func(&a, &b);

    cout << a << " " << b << endl;
    return 0;
}