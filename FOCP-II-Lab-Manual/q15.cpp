#include <iostream>
using namespace std;

int main()
{
    int n, num, max;

    cin >> n;

    cin >> max;

    for(int i = 2; i <= n; i++)
    {
        cin >> num;

        if(num > max)
        {
            max = num;
        }
    }

    cout << "Largest Number = " << max;

    return 0;
}