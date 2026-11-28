#include <iostream>
using namespace std;

class Bomb {
public:
    string code;
    char color;
    int second;

    Bomb(string code, char color, int second) {
        this->code = code;
        this->color = color;
        this->second = second;
    }

    void print() {
        cout << "code : " << code << endl;
        cout << "color : " << color << endl;
        cout << "second : " << second << endl;
    }
};

int main() {
    // Please write your code here.
    string code;
    char color;
    int second;
    cin >> code >> color >> second;

    Bomb bomb(code, color, second);
    bomb.print();

    return 0;
}