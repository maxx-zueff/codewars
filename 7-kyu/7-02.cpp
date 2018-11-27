// Link: https://www.codewars.com/kata/56269eb78ad2e4ced1000013/cpp

// Complete the findNextSquare method that finds the next integral perfect
// square after the one passed as a parameter. Recall that an integral perfect
// square is an integer n such that sqrt(n) is also an integer.

#include <iostream>
#include <cmath>
long int findNextSquare(long int);

int main (void) {

	int num;
	std::cout << "Enter square number: ";
	std::cin >> num;
	std::cout << findNextSquare(num) << std::endl;

	return 0;

}

long int findNextSquare(long int sq) {
	long int x = sqrt(sq);
	long int y = x + 1;
	return (x * x == sq ) ? y * y : -1;  
}