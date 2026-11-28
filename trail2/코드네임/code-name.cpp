#include <iostream>
#include <vector>
using namespace std;

class CodeName {
public:
    char code;
    int score;
    CodeName(char code, int score) {
        this->code = code;
        this->score = score;
    }
    CodeName() {
        code = '0';
        score = 0;
    }

    void SetCodeName(char code, int score) {
        this->code = code;
        this->score = score;
    }
    
    void print() {
        cout << code << " " << score << endl;
    }
};

int main() {
    // Please write your code here.
    vector<CodeName> arr(5);
    for(int i = 0; i<5; i++) {
        char inChar;
        int inScore;
        cin >> inChar >> inScore;

        arr[i].SetCodeName(inChar, inScore);
    }

    int index = 0;
    int maxScore = arr[0].score;
    for(int i = 0; i<5; i++) {
        if(maxScore > arr[i].score) {
            index = i;
            maxScore = arr[i].score;
        }
    }

    arr[index].print();


    return 0;
}