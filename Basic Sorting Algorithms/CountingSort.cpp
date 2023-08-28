#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

void counting_sort(int arr[], int n)
{
    int largest = -1; // default value.

    for (int i = 0; i < n; i++)
    {
        largest = std::max(largest, arr[i]);
    }

    std::vector<int> freq(largest + 1, 0);

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int j = 0;

    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    counting_sort(arr, n);

    for (int x : arr)
    {
        std::cout << x << " ";
    }

    return 0;
}