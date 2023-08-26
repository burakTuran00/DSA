#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void closestSum(vector<int> arr, int x)
{
    // |s+e-x| should be min;

    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int diff = INT_MAX;
    int leftIndex, rightIndex;

    while (s < e)
    {
        int currentSum = arr[s] + arr[e];

        if (abs(currentSum - x) < diff)
        {
            leftIndex = s;
            rightIndex = e;
            diff = abs(currentSum - x);
        }
        if (currentSum > x)
        {
            e--;
        }
        else
        {
            s++;
        }
    }

    std::cout << arr[leftIndex] << " " << arr[rightIndex];
}

int main()
{
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int x = 54;

    closestSum(arr, x);
}