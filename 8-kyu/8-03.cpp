// Link: https://www.codewars.com/kata/makeuppercase/cpp

// Write function makeUpperCase.

#include <iostream>
#include <string>
#include <locale> // std::toupper
std::string makeUpperCase (std::string);

int main(void) {

    using namespace std;
    string str;
    cout << "Type something: ";
    cin >> str;
    cout << "Your string in upper case: " << makeUpperCase(str) << endl;

    return 0;
}

std::string makeUpperCase (const std::string input_str)
{
    using namespace std;
    string output_str;

    int i = 0;
    while (input_str[i]) {
        output_str.append(1,toupper(input_str[i]));
        i++;
    }

    return output_str;
}