#include <iostream>
using namespace std;

class Goods {
private: 
    string name;
    int code;
public:
    Goods();
    Goods(string name, int code) {
        this->name = name;
        this->code = code;
    }

    void SetGoods(string name, int code) {
        this->name = name;
        this->code = code;
    }

    void print() {
        cout << "product " << code << " is " << name << endl;
    }

};

int main() {
    // Please write your code here.
    Goods goods[2] = {{"codetree", 50}, {"", 0}};
    
    string name;
    int code;
    cin >> name >> code;

    goods[1].SetGoods(name, code);
    
    for(int i = 0; i<2; i++) {
        goods[i].print();
    }
    return 0;
}