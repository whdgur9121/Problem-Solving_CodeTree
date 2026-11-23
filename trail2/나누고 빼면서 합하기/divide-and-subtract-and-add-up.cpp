#include <iostream>
#include <vector>
using namespace std;



int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;

    vector<int> arr(N+1, 0);
    for(int i = 1; i<=N; i++) {
        cin >> arr[i];
    }

    if(M == 1) {
        cout << arr[1] << endl;
        return 0;
    }

    int cnt = 0;
    while(M != 1) {
        cnt += arr[M];
        if(M %2 == 0) M = M/2;
        else M--;
    }

    cnt += arr[1];

    cout << cnt;
    
    return 0;
}