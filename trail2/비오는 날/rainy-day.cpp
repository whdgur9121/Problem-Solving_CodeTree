#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Predict {
public:
    int number;
    string date;
    string day;
    string weather;

    Predict(int number) {
        this->number = number;
        date = "";
        day = "";
        weather = "";
    }

    Predict(int number, string date, string day, string weather) {
        this->number = number;
        this->date = date;
        this->day = day;
        this->weather = weather;
    }

    bool operator<(const Predict& other) {
        if(date != other.date) return date < other.date;
        return number < other.number;
    }

    void print() {
        cout << date << " " << day << " " << weather << endl;
    }
};

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    vector<Predict> arr;
    for(int i = 0; i<n; i++) {
        string date;
        string day;
        string weather;
        cin >> date >> day >> weather;

        if(weather == "Rain") {
            arr.push_back(Predict(i, date, day, weather));
        }
    }

    sort(arr.begin(), arr.end());


    arr[0].print();
    return 0;
}