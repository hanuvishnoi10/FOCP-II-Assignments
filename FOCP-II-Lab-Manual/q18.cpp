#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, rem, temp;

    cin >> n;

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == n)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}