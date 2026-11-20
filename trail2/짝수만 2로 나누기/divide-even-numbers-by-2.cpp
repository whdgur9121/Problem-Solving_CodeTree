#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;

    vector<int> arr(N, 0);
    for(int i = 0; i<N; i++) {
        cin >> arr[i];
        if(arr[i] %2 ==0) arr[i] /= 2;
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}