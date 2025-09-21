#include <iostream>

std::string F(const std::string &Sk, char Tk);

std::string text = "xxxxaabbaa";
std::string pattern = "aabbaa";

int main()
{
    int text_length = text.length();
    int pattern_length = pattern.length();

    int K = 1;
    std::string Sk;
    int index = -1;

    while (Sk != pattern && K <= text_length + 1)
    {
        char Tk = text[K - 1];
        Sk = F(Sk, Tk);
        K++;
    }
    if (Sk == pattern)
    {
        index = K - pattern_length;
    }

    std::cout << index << std::endl;
}

std::string F(const std::string &Sk, char Tk)
{
    std::string temp = Sk + Tk;
    int len = std::min((int)temp.length(), (int)pattern.length());
    for (int l = len; l >= 0; l--)
    {
        if (temp.substr(temp.length() - l, l) == pattern.substr(0, l))
            return pattern.substr(0, l);
    }
    return "";
}