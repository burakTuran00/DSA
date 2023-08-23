#include <iostream>

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }

    return -1; // means that return false;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    std::cin >> key;

    int index = linear_search(arr, n, key);

    if (index != -1)
    {
        std::cout << key << " is present at index " << index << std::endl;
    }
    else
    {
        std::cout << " not found!" << std::endl;
    }
}