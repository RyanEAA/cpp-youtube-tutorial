#include <iostream>

using namespace std;

struct User{
    const int uId;
    const char *name; // const is for pointer not value
    const char *email;
    int course_count;
};

int main() {

    User mickey = {1, "mickey", "mickey@example.com", 0};
    User donald = {2, "donald", "donald@example.com", 10};

    cout << "mickey's name is: " << mickey.name << endl;

    cout << "donald's name is: " << donald.name << endl;
    // updating doanald's email
    donald.email = "newdonaldemail@example.com";
    cout << "donald's updated email is: " << donald.email << endl;

    User * d = &donald; // d is a pointer to donald
    d ->course_count = 11; // updating donald's course count using pointer
    cout << "donald's updated course count is: " << donald.course_count << endl;

    return 0;

}