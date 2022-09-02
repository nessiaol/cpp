#include "megaphone.hpp"

std::string megaphone(std::string str)
{
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}

int main(int argc, char** argv)
{
    int i;

    i = 1;

    if (argc != 1)
    {
        while ( i < argc)
        {
            std::cout << megaphone(argv[i]);
            i++;
            if (i != argc)
            std::cout << " ";
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return 0;
}