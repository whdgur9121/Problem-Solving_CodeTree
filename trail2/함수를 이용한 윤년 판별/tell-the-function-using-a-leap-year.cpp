#include <iostream>

using namespace std;

int y;

bool func(int y) {
    if(y%100 == 0 && y % 400 != 0) return false;
    if(y%4 == 0) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> y;

    // Please write your code here.
    bool ans = func(y);
    if(ans) cout << "true";
    else cout << "false";

    return 0;
}