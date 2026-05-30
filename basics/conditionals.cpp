#include <iostream>
#include <cstdint>
using namespace std;

int main(){

    int rating = 5;

    if (rating == 5){
        puts("5 star rating");
    } else {
        puts("not 5 star rating");
    }

    if (NULL){
        puts("NULL is true");
    } else {
        puts("NULL is false");
    }

    if (0){
        puts("0 is true");
    } else {
        puts("0 is false");
    }

    if (1){
        puts("1 is true");
    } else {
        puts("1 is false");
    }


    printf("your rating feedback is %s\n", rating > 4 ? "true block" : "false block");
    return 0;
}