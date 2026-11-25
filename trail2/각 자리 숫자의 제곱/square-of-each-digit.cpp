#include <iostream>
#include <string>
using namespace std;

int func(string N) {
    int size = N.size();
    int cnt = 0;
    for(int i = 0; i<size; i++) {
        int mulnum = (int)N[i] - '0';
        cnt += mulnum * mulnum;
    }

    return cnt;
}

int main() {
    // Please write your code here.
    string N;
    cin >> N;

    int ans = func(N);
    cout << ans << endl;
    return 0;
}