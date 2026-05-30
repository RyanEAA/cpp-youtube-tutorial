#include <iostream>

using namespace std;

int main() {

    int score = 200;
    int *score_ptr = &score; // & gives the memory address of the variable score

    cout << "score memory address is: " << score_ptr << endl;
    cout << "score value is: " << score << endl;

    int &another_score = score; // another_score is a reference to score, it is an alias for score
    another_score = 500;

    cout << "score memory address is: " << score_ptr << endl;
    cout << "updated score value is: " << score << endl;

    return 0;
}