#include <iostream>
#include <string>

using namespace std;

int n;

string func(int n) {
    if(n % 2 == 0 && (n/10 + n%10) % 5 == 0) return "Yes";
    return "No";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;

    // Please write your code here.
    string ans = func(n);

    cout << ans << endl;
    return 0;
}