#include <iostream>
#include <cstring>

int main()
{
    char a[1000] = "apple";
    char b[1000];

    // lenght
    std::cout << std::strlen(a) << std::endl;

    // copy
    std::strcpy(b, a);

    std::cout << b << std::endl;

    // compare
    std::cout << std::strcmp(a, b) << std::endl;

    char web[] = "wwww.";
    char domain[] = "domain.com";

    std::cout << std::strcat(web, domain);

    return 0;
}