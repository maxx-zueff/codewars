// Link: https://www.codewars.com/kata/return-negative/cpp

// In this simple assignment you are given a number and have to make it
// negative.

#include <iostream>
int makeNegative(int);

int main (void) {

    using namespace std;
    int num;
    cout << "Type the number: ";
    cin >> num;
    cout << "Negative: " << makeNegative(num) << endl;
    return 0;
}

int makeNegative(int num) {
    return num > 0 ? -num : num;
}