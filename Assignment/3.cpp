#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{

    int lower = -1;

    for (int x : A)
    {
        int currentLower = 0;

        if (x <= Val)
        {
            currentLower = x;

            if (currentLower > lower)
            {
                lower = currentLower;
            }
        }
    }

    return lower;
}

int main()
{
    vector<int> first = {-1, -1, 2, 3, 5};
    vector<int> second = {1, 2, 3, 4, 6};

    std::cout << lowerBound(first, 4) << std::endl;
    std::cout << lowerBound(second, 4);

    return 0;
}