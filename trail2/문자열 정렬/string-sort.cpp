#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    int size = s.size();
    vector<char> arr(size, '0');
    for(int i = 0; i<size; i++) {
        arr[i] = s[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i<size; i++) {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}