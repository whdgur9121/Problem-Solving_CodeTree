#include <iostream>
using namespace std;

class Level {
public:
    string id;
    int level;

    Level() {
        id = "";
        level = 0;
    }
    Level(string id, int level) {
        this->id = id;
        this->level = level;
    }

    void print() {
        cout << "user " << id << " lv " << level << endl;
    }
};

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Level lv1("codetree", 10);
    
    string id;
    int level;

    cin >> id >> level;
    Level lv2(id, level);

    lv1.print();
    lv2.print();

    return 0;
}