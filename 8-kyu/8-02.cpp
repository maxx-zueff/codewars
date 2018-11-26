// Link: https://www.codewars.com/kata/even-or-odd/cpp

// Create a function (or write a script in Shell) that takes an integer as an
// argument and returns "Even" for even numbers or "Odd" for odd numbers.

#include <iostream>
#include <string>
std::string even_or_odd(int);

int main ()
{
    using namespace std;
    int number;

    cout << "Enter number: ";
    cin >> number;
    cout << even_or_odd(number) << endl;
    return 0;
}

std::string even_or_odd(int number) 
{
    if (number % 2 > 0)
    {
        return "Odd";
    }
    return "Even";
}