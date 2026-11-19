#include <iostream>

using namespace std;

int M, D;

void func(int m, int d) {
    if(m > 12) {
        cout << "No" << endl;
        return;
    }
    if(d > 31) {
        cout << "No" << endl;
        return;
    }
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        cout << "Yes" << endl;
        return; 
    }
    if(d == 31) {
        cout << "No" << endl;
        return;
    }
    if(m == 4 || m == 6 || m == 9 || m == 10) {
        cout << "Yes" << endl;
        return;
    }
    if(d > 28) {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    return;
}

int main() {
    cin >> M >> D;

    // Please write your code here.
    func(M, D);

    return 0;
}