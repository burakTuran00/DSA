#include <bits/stdc++.h>
#include <vector>
using namespace std;

int largestElement(vector<int> arr)
{
    int largest = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}