// arrays are contiguous memory locations
#include <iostream>
using namespace std;

int main(){

    int integer_array[4] = {1, 2, 3, 4};

    for( int i = 0; i < 4; i++){
        cout << integer_array[i] << endl;
    }
    
    int another_array[6];
    another_array[0] = 9;
    cout << "value of another array pos 0: " << another_array[0] << endl;
    cout << "value of another array pos 1: " << another_array[1] << endl;
    cout << "value of another array pos 2: " << another_array[2] << endl;
    cout << "value of another array pos 3: " << another_array[3] << endl;
    cout << "value of another array pos 4: " << another_array[4] << endl;
    cout << "value of another array pos 5: " << another_array[5] << endl;

    *another_array = 20; // this is the same as another_array[0] = 20
    cout << "value of another array pos 0 after update: " << another_array[0] << endl;

    int *array_pointer = another_array;
    array_pointer++;

    *array_pointer = 409;

    cout << "value of integer array pos 1 after update: " << integer_array[1] << endl;
    for( int i = 0; i < 7; i++){
        cout << another_array[i] << endl;
    }

    return 0;
}