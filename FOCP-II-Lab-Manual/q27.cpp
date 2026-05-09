#include <iostream>
using namespace std;

int main()
{
    int price[10], max;

    for(int i = 0; i < 10; i++)
    {
        cin >> price[i];
    }

    max = price[0];

    for(int i = 1; i < 10; i++)
    {
        if(price[i] > max)
        {
            max = price[i];
        }
    }

    cout << "Maximum Price = " << max;

    return 0;
}