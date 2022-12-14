#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::string str;
    std::getline(std::cin, str);

    std::vector<int> ascii(123, 0);
    int len = str.length();
    for (int i = 0; i < len; i++)
        ascii[str[i]]++;

    for (char c = 'a'; c <= 'z'; c++)
        if (!(ascii[c] + ascii[c - 'a' + 'A']))
        {
            std::cout << "not pangram";
            return 0;
        }

    std::cout << "pangram";
    return 0;
}