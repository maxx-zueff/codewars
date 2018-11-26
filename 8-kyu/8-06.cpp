// Link: https://www.codewars.com/kata/youre-a-square/cpp

// Given an integral number, determine if it's a square number.

#include <iostream>
bool is_square(int);

int main(void) {

    using namespace std;
    int num;

    cout << "Type the square number: ";
    cin >> num;
    cout << is_square(num) << endl;

    return 0;
}

bool is_square (int num) {
    int square = 0;
    int i = 0;
    while (square < num ) {
        square = i*i;
        i++;
    }
    return ((num == square) ? true : false); 
}