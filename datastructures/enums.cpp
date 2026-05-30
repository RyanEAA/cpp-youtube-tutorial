#include <iostream>
using namespace std;

// preprocessor constant
#define PI 3.14

enum MsOffice {
    BOLD,
    ITALIC=5,
    UNDERLINE,
    COSSED
};

int main() {

    cout << "the value of PI is: " << PI << endl;
    // pi + 1
    cout << "the value of PI + 1 is: " << PI + 1 << endl;   

    int myAttributes = BOLD;
    cout << "myAttributes value is: " << myAttributes << endl;

    // print the value of ITALIC, UNDERLINE, and COSSED
    cout << "ITALIC value is: " << ITALIC << endl;
    cout << "UNDERLINE value is: " << UNDERLINE << endl;
    cout << "COSSED value is: " << COSSED << endl;


    // print value at index 0, 1 of MsOffice enum
    cout << "MsOffice[0] value is: " << MsOffice(0) << endl;
    cout << "MsOffice[1] value is: " << MsOffice(1) << endl;

    cout << BOLD << endl;
    return 0;
}