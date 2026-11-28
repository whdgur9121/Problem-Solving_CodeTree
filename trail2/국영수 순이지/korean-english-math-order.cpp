#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
private:
    string name;
    int kor;
    int eng;
    int mat;

public:
    Person(string name, int kor, int eng, int mat) {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->mat = mat;
    }

    void print() {
        cout << name << " " << kor << " " << eng << " " << mat << endl;
    }
    int getKor() {
        return kor;
    }
    int getEng() {
        return eng;
    }
    int getMat() {
        return mat;
    }

    bool operator<(Person& other) {
        if(kor != other.getKor()) return kor < other.getKor();
        if(eng != other.getEng()) return eng < other.getEng();
        return mat < other.getMat();
    }
};

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    vector<Person> arr;
    for(int i = 0; i<n; i++) {
        string name;
        int kor, eng, mat;
        cin >> name >> kor >> eng >> mat;

        arr.push_back(Person(name, kor, eng, mat));
    }

    sort(arr.begin(), arr.end());

    for(int i = n-1; i>-1; i--) {
        arr[i].print();
    }
    return 0;
}