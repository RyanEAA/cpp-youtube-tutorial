#include <iostream>
using namespace std;

int main() {
    cout << "enter two numbers: " << '\n';

    int x{};
    int y {};

    cout << "Enter First Number: ";
    cin >> x;

    cout << "Enter Second Number: ";
    cin >> y;

    cout << "sum = " << x+y << '\n';

    return 0;
}