#include <iostream>

using namespace std;

int main() {

    int rating = 3;

    switch(rating){
        case 1:
            puts("1 star rating");
            break;
        case 2:
            puts("2 star rating");
            break;
        case 3:
            puts("3 star rating");
            break;
        case 4:
            puts("4 star rating");
            break;
        case 5:
            puts("5 star rating");
            break;
        default:
            puts("please rate our app only between 1 and 5");
            break;
    }
}