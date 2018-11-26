// Link: https://www.codewars.com/kata/disemvowel-trolls/cpp

// Your task is to write a function that takes a string and return a new string 
// with all vowels removed.

// 1 2 3 1 2 3 1 2 3
// remove( v.begin(), v.end(), 2 )
// 1 3 1 3 1 3 ? ? ?
// Итератор, который возвратит remove, указывает на первый мусорный элемент
// v.erase( remove( v.begin(), v.end(), 2 ), v.end() );

#include <iostream>
#include <string>
#include <algorithm>
std::string disemvowel(std::string);

int main (void) {
    using namespace std;

    string input;
    cout << "Type something..." << endl;
    cin >> input;
    cout << disemvowel(input) << endl;
    
    return 0;
}

std::string disemvowel(std::string str)
{
    using namespace std;

    string vowels = "AaEeIiOoUu";
    for (int i = 0; i < vowels.size(); i++) {
        str.erase(remove(str.begin(), str.end(), vowels[i]), str.end());
    }

    return str;
}