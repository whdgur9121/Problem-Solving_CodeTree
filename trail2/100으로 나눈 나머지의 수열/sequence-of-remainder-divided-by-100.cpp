#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int func(int index) {
    if(arr[index] != -1) return arr[index];
    if(index == 0) {
        arr[index] = 2;
        return 2;
    }
    if(index == 1) {
        arr[index] = 4;
        return 4;
    }
    arr[index] = (func(index-1) * func(index-2)) % 100;
    return arr[index];

}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    arr.resize(N, -1);

    int ans = func(N-1);
    
    cout << ans << endl;
    return 0;
}