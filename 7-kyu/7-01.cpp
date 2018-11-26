// Link: https://www.codewars.com/kata/sum-of-triangular-numbers/cpp

// Your task is to return the sum of Triangular Numbers up-to-and-including the
// nth Triangular Number.

#include <iostream>
int sumTriangularNumbers(int);

int main (void) {
    using namespace std;

    int num;
    cout << "Type the number: ";
    cin >> num;
    cout << "Sum Triangular Numbers: " << sumTriangularNumbers(num) << endl;
}

int sumTriangularNumbers(int num) {
    int total = 0;
    int step = 0;
    int i;
    for (i = 1; i < num + 1; i++) {
        step = step + i;
        total = total + step;
    }
    
    return total;
}