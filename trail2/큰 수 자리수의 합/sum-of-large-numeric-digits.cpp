#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = a * b * c;
    string toStr = to_string(cnt);

    int size = toStr.size();
    int ans = 0;
    for(int i = 0; i<size; i++) {
        ans += (toStr[i] - '0');
    }

    cout << ans << endl;
    return 0;
}