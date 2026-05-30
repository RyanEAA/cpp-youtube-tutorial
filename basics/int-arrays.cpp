#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<int> my_numbers = {3, 4,5, 1,3, 34,3, 45};

    // first type of for loop
    cout << "Traditional for loop" << endl;
    for (int i = 0; i < my_numbers.size(); i++) {
        cout << "curr i = " << i << " with value = " << my_numbers[i] << endl;

    }

    // second type of for loop
    cout << "\nRange based for loop" << endl;
    for(int i: my_numbers){
        cout << "curr i = " << i << " with val = " << my_numbers[i] << endl;
    }

    cout << "\nFor loop for strings";
    vector<string> my_strings = {"hello", "world", "welcome", "to", "cpp"};
    cout << "\nRange based for loop with strings" << endl;
    for (string s: my_strings){
        cout << "curr string = " << s << endl;
    }

    cout << "regular base for loop" << endl;
    for (int i = 0; i < my_strings.size(); i++){
        cout << "curr string = " << my_strings[i] << endl;
    }

    return 0;

}