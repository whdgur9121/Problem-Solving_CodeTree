#include <iostream>

using namespace std;

int a, b;



int find(int a, int b) {
    int cnt = 0;
    for(int i = a; i<b+1; i++) {
        int num = i-1;
        bool odd = true;
        while(num > 1) {
            if(i % num == 0) {
                odd = false;
                break;
            }
            num--;
        }
        if(odd) cnt += i;
    }
    return cnt;

}

int main() {
    cin >> a >> b;

    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ans = find(a, b);
    cout << ans;

    return 0;
}