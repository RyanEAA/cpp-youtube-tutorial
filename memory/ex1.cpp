#include <iostream>

using namespace std;

int main() {
    int * myp;

    // // new means that you are forcefully using the heap memory
    // myp = new int [100]; // allocate memory for 100 integers
    // cout << "memory space allocated" << endl;

    // // have to use delete to free up the memory space allocated by new
    // delete [] myp;


    try {
        myp = new int [100000];
        cout << "memory space allocated" << endl;
    } catch (...) {
        cout << "memory allocation failed\n";
    }
    delete [] myp;
    
    return 0;
}