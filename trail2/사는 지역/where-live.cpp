#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class List {
public:
    string name;
    string number;
    string location;

    List() {
        name = "";
        number = "";
        location = "";
    }
    List(string name, string number, string location) {
        this->name = name;
        this->number = number;
        this->location = location;
    }

    void SetList(string name, string number, string location) {
        this->name = name;
        this->number = number;
        this->location = location;
    }

    void print() {
        cout << "name " << name << endl;
        cout << "addr " << number << endl;
        cout << "city " << location << endl;
    }

    bool operator<(const List& other) {
        return name < other.name;
    }
};

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    vector<List> arr(n);

    for(int i = 0; i<n; i++) {
        string name;
        string addr;
        string city;
        cin >> name >> addr >> city;

        arr[i].SetList(name, addr, city);
    }

    sort(arr.begin(), arr.end());

    arr[n-1].print();
    return 0;
}