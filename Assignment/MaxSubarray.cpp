#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> arr)
{
    int cs = 0;
    int largest = 0;

    for (int x : arr)
    {
        cs = cs + x;

        if (cs < 0)
        {
            cs = 0;
        }

        largest = std::max(largest, cs);
    }

    return largest;
}

int main()
{
    vector<int> first = {1, -2, 3, 4, 4, -2};
    vector<int> second = {5, 0, -1, 0, 1, 2, -1};

    std::cout << maxSumSubarray(first) << std::endl;
    std::cout << maxSumSubarray(second);

    return 0;
}