// heaps can grow as needed
#include <iostream>

using namespace std;

struct User{
    const int id;
    int age;

    User() : id(0), age(0) {}
};

// int main() is an entry point of the program, it is where the execution starts

int main() {
    // stack
    int score = 100;
    User mike;

    // heap
    int* heap_score = new int;
    *heap_score = 200;

    cout << "heap score type: " << typeid(heap_score).name() << endl;
    cout << "heap score value: " << *heap_score << endl;

    User* nike = new User();

    // because we are allocating memory we must delete it
    delete heap_score;
    delete nike;

    // anytime we use new we have to use delete to free up the memory space allocated
    return 0;
}