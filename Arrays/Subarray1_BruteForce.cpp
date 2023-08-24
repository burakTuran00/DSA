#include <iostream>

int printSubarrays(int arr[], int size)
{
    int largest_Sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int current_Sum = 0;

            for (int k = i; k <= j; k++)
            {
                current_Sum += arr[k];
            }

            if (current_Sum > largest_Sum)
            {
                largest_Sum = current_Sum;
            }
        }
    }

    return largest_Sum;
}

// print the sum of each subarray & find out the largest sum.

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3, -4, 9};
    int n = sizeof(arr) / sizeof(int);

    std::cout << "Largest subarray is equal to " << printSubarrays(arr, n);

    return 0;
}