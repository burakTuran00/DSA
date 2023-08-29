#include <iostream>
using namespace std;
int main()
{
    char sentence[1000];

    char temp = cin.get();
    int len = 1;

    while (temp != '\n')
    {
        len++;
        std::cout << temp;

        // update the value of temp
        temp = cin.get();
    }

    std::cout << len << std::endl;
}