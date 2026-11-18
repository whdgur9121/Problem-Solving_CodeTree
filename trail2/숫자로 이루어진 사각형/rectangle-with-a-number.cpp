#include <iostream>

using namespace std;

int N;

void func(int n) {
    int cnt = 1;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout << cnt++ << " ";
            if(cnt == 10) cnt = 1;
        }
        cout << endl;
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    func(N);

    return 0;
}