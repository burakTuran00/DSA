#include <bits/stdc++.h>
#include <algorithm>

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    std::sort(arr, arr + n, compare);
    std::reverse(arr, arr + n);

    for (int x : arr)
    {
        std::cout << x << " ";
    }

    return 0;
}