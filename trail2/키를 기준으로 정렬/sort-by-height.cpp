#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
private:
    string name;
    int height;
    int weight;

public:
    Person(string name, int height, int weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }

    int getHeight() {
        return height;
    }

    bool operator<(Person& other) {
        int otherHeight = other.getHeight();
        return height < otherHeight;
    }

    void print() {
        cout << name << " " << height << " " << weight << endl;
    }
};

int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;

    vector<Person> arr;

    for(int i = 0; i<n; i++) {
        string name;
        int height;
        int weight;
        cin >> name >> height >> weight;

        arr.push_back(Person(name, height, weight));
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i<n; i++) {
        arr[i].print();
    }
    return 0;
}