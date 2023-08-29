#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[right] != str[left])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    cout << isPalindrome("abba");
    return 0;
}