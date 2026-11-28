#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int score1, score2, score3;

    Person(string name, int score1, int score2, int score3) {
        this->name = name;
        this->score1 = score1;
        this->score2 = score2;
        this->score3 = score3;
    }

    void print() {
        cout << name << " " << score1 << " " << score2 << " " << score3 << endl;  
    }

    bool operator<(Person& other) {
        return (score1 + score2 + score3) < (other.score1 + other.score2 + other.score3);
    }
};

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    vector<Person> arr;
    for(int i = 0; i<n; i++) {
        string name;
        int score1, score2, score3;
        cin >> name >> score1 >> score2 >> score3;

        arr.push_back(Person(name, score1, score2, score3));
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i<n; i++) {
        arr[i].print();
    }
    return 0;
}