#include <bits/stdc++.h>

void bubble_sort(int arr[], int n)
{
    for (int times = 1; times <= n - 1; times++)
    {
        for (int j = 0; j < n - times - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    bubble_sort(arr, n);

    for (auto x : arr)
    {
        std::cout << x << " ";
    }

    return 0;
}