#include <iostream>
using std::string;

double add(double x, double y)
{
    return x + y;
}

double substract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

double divide(double x, double y)
{
    return x / y;
}

string compare(double x, double y)
{
    if (x == y)
    {
        return "The numbers are equal";
    }
    if (x > y)
    {
        return "First number is higher";
    }
    if (x < y)
    {
        return "Second number is higher";
    }
}

int range_sum(int x, int y)
{
    int sum = 0;
    for (int i = x; i <= y; i++)
    {
        sum += i;
    }
    return sum;
}

int factorial(int x)
{
    int factorial = 1;
    for (int j = (int)x; j > 1; j--)
    {
        factorial *= j;
    }
    return factorial;
}