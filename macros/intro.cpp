#include <iostream>
#include <string>


// macros return whatever is after macro name
#define end return 0
#define ENDMESSAGE cout << "Program ends here" << endl;

#define LCOINT int8_t

#define console_log(a) cout << a << endl

using namespace std;

int main()
{
    string name = "Ryan";
    LCOINT a = 4;
    console_log(name);
    ENDMESSAGE;

    end;
}