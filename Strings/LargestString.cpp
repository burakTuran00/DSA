#include <iostream>
#include <cstring>
int main()
{

    int n;
    std::cin >> n;

    std::cin.get();

    char sentence[1000];
    char largest[1000];

    int largest_len = 0;

    while (n--)
    {
        std::cin.getline(sentence, 1000);

        int len = std::strlen(sentence);

        if (len > largest_len)
        {
            largest = len;
        }
    }

    return 0;
}