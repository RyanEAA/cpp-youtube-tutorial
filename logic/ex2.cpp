#include <iostream>

using namespace std;

int main() {

    bool isFbUser = false;
    bool isGoogleUser = false;
    bool isAdmin = false;

    if ((isFbUser || isGoogleUser) && isAdmin) {
        cout << "welcome admin\n";
    } else if (isFbUser || isGoogleUser){
        cout << "welcome user\n";
    } else {
        cout << "please sign in\n";
    }
    return 0;
}