#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a;
    string b;

    cin >> a >> b;

    int size = a.size();
    int Bsize = b.size();
    if(size != Bsize) {
        cout << "No" << endl;
        return 0;
    }

    vector<char> Aarr(size, '0');
    vector<char> Barr(size, '0');

    for(int i = 0; i<size; i++) {
        Aarr[i] = a[i];
        Barr[i] = b[i];
    }

    sort(Aarr.begin(), Aarr.end());
    sort(Barr.begin(), Barr.end());

    bool check = true;
    for(int i = 0; i<size; i++) {
        if(Aarr[i] != Barr[i]) {
            check = false;
            break;
        }
    }

    if(check) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}