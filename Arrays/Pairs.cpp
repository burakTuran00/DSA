#include <iostream>

void printAllPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int x = arr[i];

        for (int j = i + 1; j < size; j++)
        {
            int y = arr[j];

            std::cout << "("<< x << "," << y << ")" << std::endl;
        }

        std::cout << std::endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(int);

    printAllPairs(arr, n);

    return 0;
}