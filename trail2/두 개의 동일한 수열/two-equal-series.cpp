#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> Aarr(n, 0);
    vector<int> Barr(n, 0);

    for(int i = 0; i<n; i++) {
        cin >> Aarr[i];
    }
    for(int i = 0; i<n; i++) {
        cin >> Barr[i];
    }

    sort(Aarr.begin(), Aarr.end());
    sort(Barr.begin(), Barr.end());

    bool find = true;
    for(int i = 0; i<n; i++) {
        if(Aarr[i] != Barr[i]) {
            find = false;
            break;
        }
    }

    if(find) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}