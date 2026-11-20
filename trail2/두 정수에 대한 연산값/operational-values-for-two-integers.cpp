#include <iostream>
using namespace std;

void func(int* a, int* b) {
    if(*a > *b) {
        *a += 25;
        *b *= 2;
        return;
    }
    *a *= 2;
    *b += 25;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    func(&a, &b);

    cout << a << " " << b <<endl;
    return 0;
}