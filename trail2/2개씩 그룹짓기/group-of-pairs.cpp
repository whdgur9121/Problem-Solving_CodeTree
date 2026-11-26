#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<int> arr(2 * N, 0);
    for(int i = 0; i < N*2; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int ans = 0;

    for(int i = 0; i< N; i++) {
        int cnt = 0;
        cnt = arr[i] + arr[(2 * N - 1) - i];
        if(ans < cnt) ans = cnt;
    }

    cout << ans;

    return 0;
}