#include <iostream>

using namespace std;

int main(){

    char my_string[] = "hello world";

    for (int i = 0; my_string[i]; i++){
        cout << my_string[i] << endl;
    }


    // doing the same thing with a char array
    cout << "\nchar array example" << endl;
    char my_name[] = {'j', 'o', 'h', 'n', '\0'}; // null terminator is needed to indicate the end of the string
    for (int i = 0; my_name[i]; i++) {
        cout << my_name[i] << endl;
    }


    // doing array with pointers
    cout << "\nchar array with pointers examples" << endl;
    char *my_name_ptr = my_name;
    for (char * my_name_ptr = my_name; *my_name_ptr; my_name_ptr++){
        cout << *my_name_ptr << endl;
    }

    // doing for loop with iterator
    cout << "\nchar array with iterators example" << endl;
    for(char i: my_name){
        cout << i << endl;
    }

    return 0;
}