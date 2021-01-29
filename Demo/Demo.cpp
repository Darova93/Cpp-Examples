#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::getline;

#include "Programs.h"

int main()
{
    string textOperation;

    cout << "Select the program" << '\n';
    cout << "calculator" << '\n';
    cout << "text" << '\n';
    cout << "vectors" << '\n';
    getline(cin, textOperation);

    if (textOperation == "calculator")
    {
        calculator();
    }
    if (textOperation == "text")
    {
        compare_phrases();
    }
    if (textOperation == "vectors")
    {
        vectors();
    }
}
