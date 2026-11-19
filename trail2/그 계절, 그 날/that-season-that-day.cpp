#include <iostream>

using namespace std;

int Y, M, D;

bool find_Yoon(int Y) {
    if(Y % 400 == 0) return true;
    if(Y % 100 == 0) return false;
    if(Y % 4 == 0) return true;
    return false;
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    bool Yoon = find_Yoon(Y);

    if(M < 3 || M == 12) { //봄인 경우
        if(M == 2 && Yoon) {
            if(D > 29) {
                cout << -1 << endl;
                return 0;
            }
        } 
        if(M == 2 && !Yoon) {
            if(D > 28) {
                cout << -1 << endl;
                return 0;
            }
        }
        cout << "Winter" << endl;
        return 0;
    }
    if(M < 6) {
        if(M == 4) {
            if(D > 30) {
                cout << -1 << endl;
                return 0;
            } 
        }
        cout << "Spring" << endl;
        return 0;
    }

    if(M < 9) {
        if(M == 6) {
            if( D > 30) {
                cout << -1 << endl;
                return 0;
            }
        }
        cout << "Summer" << endl;
        return 0;
    }
    if(M < 12) {
        if(M == 9 || M == 11) {
            if(D > 30) {
                cout << -1 << endl;
                return 0;
            }
        }
        cout << "Fall" << endl;
        return 0;
    }

    return 0;
}