#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> words {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : words){ // iterates through each string word in words vector
        cout << word << " "; // prints each word followed by a space
    }

    cout << endl; // prints a newline at the end

    return 0;
}