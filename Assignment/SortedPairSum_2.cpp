#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void closestSum(vector<int> arr, int x)
{
    int n = arr.size();
    int diff = INT_MAX;
    int leftValue, rightValue;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int result = abs(arr[i] + arr[j] - x);

            if (result < diff)
            {
                diff = abs(result);
                leftValue = arr[i];
                rightValue = arr[j];
            }
        }
    }

    std::cout << leftValue << " " << rightValue;
}

int main()
{
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int x = 54;

    closestSum(arr, x);
}