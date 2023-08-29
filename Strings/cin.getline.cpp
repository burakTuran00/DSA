#include <iostream>

int main()
{
    char sentence[1000];

    std::cin.getline(sentence, 1000, '.');

    std::cout << sentence << std::endl;
}