#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();

    int alpabet = 0;
    int space = 0;
    int digit = 0;

    while (ch != '\n')
    {
        if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            alpabet++;
        }
        else if (ch == ' ' || ch == '\t')
        {
            space++;
        }

        ch = cin.get();
    }

    cout << "Total alpabet:" << alpabet << endl;
    cout << "Total space:" << space << endl;
    cout << "Total digit:" << digit << endl;

    return 0;
}