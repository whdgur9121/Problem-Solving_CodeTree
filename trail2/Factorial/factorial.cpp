#include <iostream>
using namespace std;

int factorial(int number) {
    if(number == 1) return 1;
    int cnt = 0;
    cnt = number * factorial(number-1);

    return cnt;
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;

    return 0;
}