#include <iostream>

using namespace std;

int N;

int func(int N) {
    int cnt = 0;
    cnt += (N+1) * (N/2);
    if(N %2 == 1) {
        cnt += (N/2)+1;
    }

    return cnt;
}

int main() {
    cin >> N;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Please write your code here.
    int ans = func(N) / 10;
    cout << ans << endl;
    return 0;
}