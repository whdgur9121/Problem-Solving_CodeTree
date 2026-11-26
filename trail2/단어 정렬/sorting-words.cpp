#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;

    vector<string> arr(n, "");
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    for(int i = 0; i<n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}