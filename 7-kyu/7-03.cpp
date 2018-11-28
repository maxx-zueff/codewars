// Link: https://www.codewars.com/kata/57f609022f4d534f05000024/cpp

// Complete the method which accepts such an array, and returns that single
// different number.

#include <iostream>
#include <vector>

int stray(std::vector<int>);

int main(void) {
	std::vector<int> num = {17, 17, 3, 17, 17, 17, 17};
	std::cout << stray(num) << std::endl;
}

int stray(std::vector<int> numbers) {
	int first = numbers[0];
	for (int i: numbers) {
		if (i != first) {
			return i;
		}
	}
	return first;
};
