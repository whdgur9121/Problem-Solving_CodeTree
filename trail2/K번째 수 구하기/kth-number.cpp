#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;

    vector<int> arr(N, 0);
    for(int i = 0; i<N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << arr[K-1] << endl;
    return 0;
}