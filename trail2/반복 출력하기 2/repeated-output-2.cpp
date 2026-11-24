#include <iostream>
using namespace std;

void func() {
    cout << "HelloWorld" << endl;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    while(n--) {
        func();
    }
    return 0;
}