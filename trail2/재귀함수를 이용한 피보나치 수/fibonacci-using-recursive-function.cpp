#include <iostream>
#include <vector>
using namespace std;

vector<int> save;

int func(int n) {
    if(save[n] != -1) return save[n]; 
    if(n == 0 || n == 1) {
        save[n] = 1;
        return save[n];
    }
    save[n] = func(n-1) + func(n-2);
    return save[n];
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N;
    cin >> N;

    save.resize(N, -1);

    int ans = func(N-1);

    cout << ans << endl;
    return 0;
}