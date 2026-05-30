#include <iostream>

using namespace std;

int main() {
    unsigned int x = 6;
    unsigned int y = 7;

    unsigned int z = x & y; // bitwise AND

    unsigned int left_shift_z = z << 1;
    unsigned int right_shift_z = z >> 1;

    cout << "x & y: " << z << endl;
    cout << "z left shifted by 1: " << left_shift_z << endl;
    cout << "z right shifted by 1: " << right_shift_z << endl;
    
    return 0;
}