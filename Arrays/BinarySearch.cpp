#include <iostream>

int linear_search(int arr[], int n, int key)
{

    // Time complexitiy O(log 2 tabanında N)

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            e = mid + 1;
        }
    }

    return -1;
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