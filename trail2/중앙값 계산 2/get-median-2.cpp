#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<int> arr;
    for(int i = 0; i<N; i++) {
        int input = 0;
        cin >> input;
        arr.push_back(input);

        sort(arr.begin(), arr.end());

        if(i % 2 == 0) {
            cout << arr[i/2] << " ";
        }
    }


    return 0;
}