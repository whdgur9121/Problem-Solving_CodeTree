#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, k;
    string target;
    cin >> n >> k >> target;

    vector<string> arr(n, "");
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int targetSize = target.size();
    int cnt = 0;
    for(int i = 0; i<n; i++) {
        //첫 글자부터 확인
        if(arr[i][0] != target[0]) {
            continue;
        }
        //첫 글자가 같은 경우 모든 경우 탐색
        bool check = true;
        for(int j = 0; j<targetSize; j++) {
            if(arr[i][j] != target[j]) {
                check = false;
                break;
            }
        }
        if(check) cnt++;
        if(cnt == k){
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}