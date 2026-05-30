#include <iostream>

using namespace std;

int main() {
    char call_api = '2';

    try {
        cout << "calling api...\n";
        cout << "did some testing with api value\n";

        throw call_api;
        cout << "NO CODE EXECUTED AFTER THROW\n";
    } catch (int e) {
        cout << "caught an exception with value: " << e << endl;

    } catch (float e) {
        cout << "caught float exception: " << e << endl;
    } catch (...) {
        cout << "something went wrong\n";
    }

    cout << "keep on moving with rest of code\n";

    return 0;
}