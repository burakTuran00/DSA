#include <iostream>

int main()
{
    int marks[100];

    int n;
    std::cout << "Enter the number of students:";
    std::cin >> n;

    // Input
    for (int i = 0; i < n; i++)
    {
        std::cin >> marks[i];
    }

    // Output
    for (int i = 0; i < n; i++)
    {
        std::cout << marks[i] << " ,";
    }

    std::cout << std::endl;

    return 0;
}
