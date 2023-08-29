#include <iostream>
#include <cstring>

int main()
{
    char a[] = {'a', 'b', 'c'}; // wrong

    char b[] = {'a', 'b', 'c', '\0'}; // true, null character

    char c[] = {"abcdfghi"};

    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << c << std::endl;

    std::cout << std::strlen(c); // number of visible characters.
    std::cout << std::size(c); // +1 because of null character. 

    return 0;
}