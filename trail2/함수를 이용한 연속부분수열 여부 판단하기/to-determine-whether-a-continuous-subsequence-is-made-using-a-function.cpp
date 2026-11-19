#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    bool ans = false;

    //슬라이딩 윈도우로 판별
    //2번은 항상 0부터 n2까지
    for(int i = 0; i <= n1-n2; i++) {
        int cnt = 0;
        for(int j = 0; j<n2; j++) {
            if(a[i+j] == b[j]) cnt++;
        }
        if (cnt == n2) ans = true;

    }


    if(ans) cout << "Yes" <<endl;
    else cout << "No" << endl;

    return 0;
}