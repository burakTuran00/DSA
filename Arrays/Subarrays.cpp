#include <iostream>

void printSubarrays(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                std::cout << arr[k] << ",";
            }

            std::cout << std::endl;
        }
    }
}

// print the sum of each subarray & find out the largest sum.

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(int);

    printSubarrays(arr, n);

    return 0;
}