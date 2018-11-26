// Link: https://www.codewars.com/kata/simple-multiplication/cpp

// Multiplying a given number by eight if it is an even number and by nine otherwise.

#include <iostream>
int simpleMultiplication(int);

int main (void) {

    using namespace std;
    int num;
    cout << "Type the number: ";
    cin >> num;
    cout << "Result: " << simpleMultiplication(num) << endl;
    return 0;
};

int simpleMultiplication(int a) {
    return (a % 2) > 0 ? a * 9 : a * 8;
};