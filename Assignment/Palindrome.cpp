#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return (str == reversedStr) ? true : false;
}

int main()
{
    std::cout << isPalindrome("abba");

    return 0;
}