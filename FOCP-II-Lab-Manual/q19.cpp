#include <iostream>
using namespace std;

int main()
{
    int start, end, count;

    cin >> start >> end;

    for(int i = start; i <= end; i++)
    {
        count = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            cout << i << " ";
        }
    }

    return 0;
}