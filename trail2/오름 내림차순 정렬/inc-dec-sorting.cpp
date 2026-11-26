#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end(), greater<int>());
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}