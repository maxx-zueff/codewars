// Link: https://www.codewars.com/kata/554b4ac871d6813a03000035/cpp

// In this little assignment you are given a string of space separated
// numbers, and have to return the highest and lowest number.

#include <string>
#include <iostream>
#include <regex>

std::string highAndLow(const std::string&);

int main(void) {

	std::string numbers;
	std::cout << "Type numbers: ";
	std::getline(std::cin, numbers);
	std::cout << "High and Low: " << highAndLow(numbers);	
	return 0;
};

std::string highAndLow(const std::string& numbers) {
	using namespace std;

	regex e ("-?[0-9]+");
	auto it = sregex_iterator(numbers.begin(), numbers.end(), e);
	auto end = sregex_iterator();

	int SIZE = distance(it, end);
	int * nums = new int [SIZE];

	for (int i = 0; it!=end; i++) {
		nums[i] = std::stoi( it->str() );
		++it;
	}

	int max = nums[0];
	int min = nums[0];

	for (int i = 0; i < SIZE; i++) {

		if (max < nums[i]) max = nums[i];
		if (min > nums[i]) min = nums[i];
	}

	return to_string(max) + " " + to_string(min);

}