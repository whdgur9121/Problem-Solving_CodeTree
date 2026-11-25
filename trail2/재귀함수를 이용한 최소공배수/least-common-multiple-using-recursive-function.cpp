#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
int ans = 0;
int n;

int gcd(int a, int b) {
    if(b > a) {
        int temp = a;
        a = b;
        b = temp;
    }
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

void findMul(int index, int mul) {
    if(index == n) return;
    
    int share = gcd(mul, arr[index]);
    int share_mul = (mul / share) * arr[index];

    ans = share_mul;

    findMul(index+1, share_mul);
}

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    arr.resize(n, 0);
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    findMul(0, 1);

    cout << ans << endl;
    return 0;
}