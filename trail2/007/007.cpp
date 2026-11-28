#include <iostream>
using namespace std;

class Secret {
private:
    string code;
    char location;
    int time;
public:
    Secret(string code, char location, int time) {
        this->code = code;
        this->location = location;
        this->time = time;
    }
    void print() {
        cout << "secret code : " << code << endl;
        cout << "meeting point : " << location << endl;
        cout << "time : " << time << endl;
    }
};

int main() {
    // Please write your code here.
    string code;
    char location;
    int time;
    cin >> code >> location >> time;

    Secret S(code, location, time);
    S.print();

    return 0;
}