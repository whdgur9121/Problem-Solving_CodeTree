#include <iostream>
using namespace std;

void func() {
    for(int i = 0; i<10; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    // Please write your code here.
    for(int i = 0; i<5; i++) {
        func();
    }
    return 0;
}