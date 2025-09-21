#include <iostream>

int main()
{

    std::string text = "iwillfindyouandkillyou";
    std::string pattern = "lyou";

    int text_length = text.length();
    int pattern_length = pattern.length();

    int text_pos = 0;
    int max = text_length - pattern_length + 1;
    int index = 0;

    while (text_pos < max)
    {
        int slider;
        for (slider = 0; slider < pattern_length; slider++)
        {
            if (pattern[slider] != text[text_pos + slider])
            {
                break;
            }
        }
        if (slider == pattern_length)
        {
            index = text_pos + 1;
            break;
        }
        text_pos++;
    }

    std::cout << index << std::endl;
}
