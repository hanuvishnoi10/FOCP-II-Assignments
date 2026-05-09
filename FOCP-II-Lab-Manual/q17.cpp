#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, rem, temp;

    cin >> n;

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if(sum == n)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }

    return 0;
}