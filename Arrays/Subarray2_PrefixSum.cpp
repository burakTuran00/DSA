#include <iostream>

// Prefix Sum Approach
int largestSubarrauSum2(int arr[], int size)
{
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < size; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int largest_sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int subarraySum = (i > 0) ? prefix[j] - prefix[i - 1] : prefix[j];

            if (subarraySum > largest_sum)
            {
                largest_sum = subarraySum;
            }
        }
    }

    return largest_sum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3, -4, 9};
    int n = sizeof(arr) / sizeof(int);

    std::cout << largestSubarrauSum2(arr, n) << std::endl;

    return 0;
}