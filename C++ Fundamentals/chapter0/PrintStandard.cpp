#include <iostream>

const int numStandards = 7;
const long stdCode[numStandards] = {199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202402L};
const char* stdName[numStandards] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26" };

long getCPPStandard()
{
    // Visual Studio is non-conforming in support for __cplusplus (unless you set a specific compiler flag, which you probably haven't)
    // In Visual Studio 2015 or newer we can use _MSVC_LANG instead
    // See https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
#if defined (_MSVC_LANG)
    return _MSVC_LANG;
#elif defined (_MSC_VER)
    // If we're using an older version of Visual Studio, bail out
    return -1;
#else
    // __cplusplus is the intended way to query the language standard code (as defined by the language standards)
    return __cplusplus;
#endif
}

int main() 
{
    long standard = getCPPStandard();

    if (standard == -1)
    {
        std::cout << "Error: Unable to determine language standard";
        return 0;
    }

    for (int i = 0; i < numStandards; ++i)
    {
        if (standard == stdCode[i])
        {
            std::cout << "Compiler is using " << stdName[i]
                << " Standard (" << stdCode[i] << ")\n";
                break;
        }

        if (standard < stdCode[i])
        {
            std::cout << "Compiler is using a pre-" << stdName[i]
                << " Standard (" << standard << ")\n";
            break;
        }   
    }

    return 0;
}