#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;

    arr.resize(N, 0);
    for(int i = 0; i<N; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> Quest(M, vector<int>(2, 0));
    for(int i = 0; i<M; i++) {
        cin >> Quest[i][0] >> Quest[i][1];
    }   

    for(int i = 0; i<M; i++) {
        int cnt = 0;
        int start = Quest[i][0];
        int last = Quest[i][1];

        for(int k = start; k <= last; k++) {
            cnt += arr[k-1];
        }
        cout << cnt << endl; ;
    } 
    return 0;
}