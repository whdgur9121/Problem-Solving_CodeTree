#include <iostream>
#include<string>
using namespace std;

int a, b;

int prime(int a) {
    int cnt_num = a-1;
    while(cnt_num > 1) {
        if(a % cnt_num == 0) return 0;
        cnt_num--;
    }
    return 1;
}

int even(int a) {
    int cnt = 0;
    string str = to_string(a);
    int size = str.size();

    for(int i = 0; i<size; i++) {
        cnt += (int)(str[i] - 48);
    }

    if(cnt % 2 != 0) return 0;
    return 1;
}

int func(int a) {
    int ans = (prime(a) + even(a) == 2) ? 1 : 0;
    return ans;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    int cnt = 0;
    for(int i = a; i<b+1; i++) {
        cnt += func(i);
    }
    cout << cnt << endl;

    return 0;
}