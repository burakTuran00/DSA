#include <iostream>

void printArray(int *arr, int n)
{
    std::cout << "In funciton " << sizeof(arr) << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    arr[0] = 0; // That'll change the main. If want to see arr[0] will be zero at the main.
    std::cout << arr[0];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    std::cout << "In main " << sizeof(arr) << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    printArray(arr, n);

    return 0;
}