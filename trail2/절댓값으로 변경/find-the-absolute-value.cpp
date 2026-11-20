#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> arr;

void func() {
    for(int i = 0; i<N; i++) {
        if(arr[i] < 0) {
            arr[i] *= -1;
        }
    }
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin >> N;

    arr.resize(N, 0);

    for(int i = 0; i<N; i++) {
        cin >> arr[i];
    }


    func();

    for(int i = 0; i<N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}