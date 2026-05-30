#include <iostream>
#include <string>
using namespace std;


int main() {
    string first_name;
    string last_name;
    string color;
    int number;

    // prompt user to get first_name
    cout << "Enter your first name: ";
    getline(cin , first_name);

    cout << "Enter your last name: ";
    getline(cin, last_name);

    cout << "Enter your favorite color: ";
    getline(cin, color);

    cout << "Enter a number: ";

    cin >> number;

    cout << "\nHello, " << first_name << " " << last_name << "!" << endl;
    // %d is used as a placeholder for an integer in the string
    cout << "your favorite color is: " << color << endl;
    printf("your number + 3 number is: %d\n", number + 3);
    return 0;
}