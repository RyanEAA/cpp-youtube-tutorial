#include <iostream>
#include <string>

using namespace std;

template <typename T>
void func(T t) {
    cout << t << endl;
}

template <typename T, typename... Args>
// overriding func function
// this is recursive function, it will call itself until there is only one argument left
void func(T t, Args... args) {
    cout << t << endl;
    // every single time that the func function is called with more than one argument, the first argument is printed and the func function is called again with the remaining arguments until there is only one argument left

    func(args...);
}
int main(){

    string myName = "Ryan";

    func(1);

    func(1, 2, 3, 4, 4.5, myName);
    return 0;
}