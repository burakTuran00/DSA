#include <bits/stdc++.h>

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous -= 1;
        }

        arr[previous + 1] = current;
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    insertion_sort(arr, n);

    for (auto x : arr)
    {
        std::cout << x << " ";
    }

    return 0;
}