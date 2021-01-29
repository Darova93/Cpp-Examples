#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::getline;

#include "Operations.h"
#include "ListOperations.h"

#include <vector>
using std::vector;

void calculator()
{
    int firstNumber = 0;
    int secondNumber = 0;
    bool keepgoing = true;
    int answer = 0;
    int operation = 0;

    while (keepgoing)
    {
        system("CLS");
        cout << "Enter a number" << '\n';
        cin >> firstNumber;
        cout << "Enter a second number" << '\n';
        cin >> secondNumber;
        cout << "Select the operation number" << '\n';
        cin >> operation;
        cin.ignore(100, '\n');

        cout << '\n' << "Result: ";
        switch (operation)
        {
        case 1:
            cout << add(firstNumber, secondNumber);
            break;
        case 2:
            cout << substract(firstNumber, secondNumber);
            break;
        case 3:
            cout << multiply(firstNumber, secondNumber);
            break;
        case 4:
            cout << divide(firstNumber, secondNumber);
            break;
        case 5:
            cout << compare(firstNumber, secondNumber);
            break;
        case 6:
            cout << range_sum(firstNumber, secondNumber);
            break;
        case 7:
            cout << factorial(firstNumber);
            break;
        default:
            cout << "No operation selected";
            break;
        }

        cout << '\n' << '\n' << "Continue?" << '\n';
        cin >> answer;
        if (answer == 0)
        {
            keepgoing = false;
        }
    }
}

void compare_phrases()
{
    string phrase1;
    string phrase2;

    cout << "Enter a phrase" << '\n';
    getline(cin, phrase1);
    cout << "Enter another phrase" << '\n';
    getline(cin, phrase2);

    if (phrase1.length() == phrase2.length())
    {
        cout << "They are the same length.";
    }
    if (phrase1.length() > phrase2.length())
    {
        cout << "The first word is longer.";
    }
    if (phrase1.length() < phrase2.length())
    {
        cout << "The secondd word is longer.";
    }
}

void vectors()
{
    vector<int> nums;
    for (int i = 0; i < 10; i++)
    {
        nums.push_back(i);
    }
    print_vector(nums);
    cout << "int vector nums has: " << nums.size() << " elements." << '\n';
    nums[5] = 3;
    nums[6] = -1;
    nums[1] = 99;
    print_vector(nums);
    print_element_count(nums, 3);

    vector<string> words;
    cout << "Enter three words";
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        words.push_back(s);
    }
    print_vector(words);
    print_sorted_vector(words);
}
