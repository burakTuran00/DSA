#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr;

    std::vector<int> arr2(10, 2);

    arr.pop_back();

    arr.push_back(15);

    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }

    std::cout << arr.size() << std::endl;
    std::cout << arr.capacity() << std::endl;

    return 0;
}