#include <iostream>
using namespace std;

string N, M;

int func() {
    for(int i =0; i<=(N.size() - M.size()); i++) {
        bool cnt = true;
        for(int j = 0; j<M.size(); j++) {
            if(N[i+j] != M[j]){
                cnt = false;
                break;
            }
        }
        if(cnt) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin >> N >> M;

    int index = func();
    cout << index << endl;
    return 0;
}