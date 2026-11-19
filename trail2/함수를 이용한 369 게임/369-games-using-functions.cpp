#include <iostream>
#include <string>

using namespace std;

int a, b;

int func(int a, int b) {
    int cnt = 0;
    for(int i = a; i<b+1; i++) {
        if(i % 3 == 0) {
            cnt++;
            continue;
        }
        string str = to_string(i);
        int size = str.size();
        for(int j = 0; j<size; j++) {
            if(str[j] == '3' || str[j] == '6' || str[j] == '9') {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> a >> b;

    // Please write your code here.
    int ans = func(a, b);
    cout << ans << endl;
    return 0;
}