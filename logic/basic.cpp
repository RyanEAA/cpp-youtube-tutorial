#include <iostream>

using namespace std;

int main() {
    bool isSignedIn = false;
    bool isAdmin = true;

    if (isSignedIn && isAdmin) {
        cout << "welcome admin\n";
    } else if (isSignedIn && !isAdmin){
        cout << "welcome user\n";
    } else {
        cout << "please sign in\n";
    }
    
    return 0;
}