#include <iostream>

// This is a c library that provides input and output functionalities
#include <cstdio>
using namespace std;

// int main(int argc, const char * argv[]){
//     std:cout << "hello world";
//     return 0;
// }

void nothing() {
    // this function returns nothing
    puts("This function does nothing");
}

char iamachar() {
    // this function returns a char
    return 'a';
}

// main method is used as the entry point of the program
int main() {
    // semicolon is used to terminate the statement
    puts("Click on Button");
    puts("Create a new player");
    puts("Add Life to Player");


    // using a function that returns nothing
    nothing();


    puts("the char returned by iamchar is:");
    cout << iamachar() << endl;
    return 0;
}

