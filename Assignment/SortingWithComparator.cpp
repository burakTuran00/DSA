#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{

    vector<int> sortedVector = a;

    if (flag)
    {
        sort(sortedVector.begin(), sortedVector.end());
    }
    else
    {
        sort(sortedVector.begin(), sortedVector.end(), std::greater<int>());
    }

    return sortedVector;
}