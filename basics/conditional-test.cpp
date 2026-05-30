#include <iostream>

using namespace std;

int take_rating() {
    int rating;

    // take in rating
    cout << "please input your arintg (1-5):";
    cin >> rating;

    return rating;
}   

int main() {

    int rating;

    // take in rating
    rating = take_rating();

    while (rating < 1 || rating > 5){
        if (rating > 5) {
            cout << "rating cannot be greater than 5" << endl;
  
        } else if (rating < 1) {
            cout << "rating cannot be less than 1" << endl;
        } 
        rating = take_rating();
    }

    cout << "your rating is: " << rating << endl;


    return 0;
}