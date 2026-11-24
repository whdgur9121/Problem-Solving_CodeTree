#include <iostream>
using namespace std;

int N;

void up(int now) {
    if(now > N) return;
    cout << now << " ";
    up(now+1);
}

void down(int now) {
    if(now < 1) return;
    cout << now << " ";
    down(now-1);
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N;

    up(1);
    cout << endl;

    down(N);
    cout << endl;
    return 0;
}