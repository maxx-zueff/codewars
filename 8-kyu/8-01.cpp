// Link: https://www.codewars.com/kata/simple-encryption-number-1-alternating-split/cpp

// Take every 2nd char from the string, then the other chars, that are not
// every 2nd char, and concat them as new String. Do this n times!

#include <iostream>
#include <string>
std::string encrypt(std::string, int);
std::string decrypt(std::string, int);

int main()
{

    std::string output = encrypt("", 1);
    std::string input = decrypt(output, 1);

    std::cout << output << std::endl;
    std::cout << input << std::endl;
    return 0;
}

std::string encrypt (std::string text, int n)
{
    using namespace std;

    if (text.length() == 0 || n <= 0)
    {
        return text;
    }
    
    for(int i=0; i < n; i++)
    {
        string every2nd;
        string every3rd;

        for (unsigned int i=1; i < text.length(); i=i+2)
        {
            every2nd.append(1, text.at(i));
        }

        for (int i=0; i < text.length(); i=i+2)
        {
            every3rd.append(1, text.at(i));
        }

        text = every2nd + every3rd;
    }

    return text;
}

std::string decrypt(std::string encryptedText, int n)
{
    using namespace std;

    if (encryptedText.length() == 0 || n <= 0)
    {
        return encryptedText;
    }

    int part1st = encryptedText.length()/2;
    int part2nd = encryptedText.length() - part1st;

    for (int i=0; i < n; i++)
    {
        string text;
        for (int i=0; i < part2nd; i++)
        {
            
            text.append(1,encryptedText.at(i+part1st));
            if (i > part1st-1) 
            {
                break;
            }
            text.append(1,encryptedText.at(i));
        }
        encryptedText = text;
    }

    return encryptedText;
}