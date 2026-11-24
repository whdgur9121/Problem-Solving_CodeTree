#include <iostream>
using namespace std;

int N;

void func(int cnt) {
    if(cnt > N)  return;
    for(int i = 0; i<cnt; i++) { 
        cout << "*";
    }
    cout << endl;
    func(cnt+1);
}

int main() {
    // Please write your code here.
    cin >> N;

    func(1);

    return 0;
}