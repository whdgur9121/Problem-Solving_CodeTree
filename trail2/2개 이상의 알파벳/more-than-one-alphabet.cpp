#include <iostream>
#include <map>
using namespace std;


int Alpha(string str) {
    int cnt = 0;
    map<char, int> map_char;
    int size = str.size();
    for(int i = 0; i<size; i++) {
        if(map_char[str[i]] == 0) {
            map_char[str[i]] = ++cnt;
        }
    }
    return cnt;
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a;
    cin >> a;

    int cnt = Alpha(a);

    if(cnt > 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}