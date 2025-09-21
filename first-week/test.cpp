#include <iostream>

int main()
{
    std::string text = "aabbaa";
    std::string pat = "bb";

    int index = text.find(pat);

    std::cout << text[index] << std::endl;
}
