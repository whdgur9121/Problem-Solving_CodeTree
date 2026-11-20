#include <iostream>
using namespace std;

bool Check(string A) {
    int size = A.size();
    bool find = true;
    int cnt_idx = size-1;
    for(int i = 0; i<size/2; i++) {
        if(A[i] != A[cnt_idx-i]){
            find = false;
            break;
        }
    }
    return find;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // Please write your code here.
    string A;
    cin >> A;

    if(Check(A)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}