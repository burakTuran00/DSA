#include <iostream>
#include <cmath>

int maximum_subarray_sum(int arr[], int size)
{
    int cs = 0;
    int largest = 0;

    for (int i = 0; i < size; i++)
    {
        cs = cs + arr[i];

        if (cs < 0)
        {
            cs = 0;
        }

        largest = std::max(largest, cs);
    }

    return cs;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3, -4, 9};
    int n = sizeof(arr) / sizeof(int);

    std::cout << maximum_subarray_sum(arr, n) << std::endl;

    return 0;
}