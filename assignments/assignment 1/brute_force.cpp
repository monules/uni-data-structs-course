#include <iostream>

int main()
{

    std::string text = "iwillfindyouandkillyou";
    std::string pattern = "illy";

    int text_length = text.length();
    int pattern_length = pattern.length();

    int K;
    int MAX = text_length - pattern_length + 1;
    int index = -1;

    for (int K = 1; K <= MAX; K++)
    {
        int i;
        for (i = 0; i < pattern_length; i++)
        {
            if (pattern[i] != text[K + i - 1])
            {
                break;
            }
        }
        if (i == pattern_length)
        {
            index = K;
            break;
        }
    }

    std::cout << index << std::endl;
}
