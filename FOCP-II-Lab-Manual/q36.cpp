#include <iostream>
using namespace std;

int main()
{
    int m, n, p, q;

    cin >> m >> n >> p >> q;

    int a[10][10], b[10][10], mul[10][10];

    if(n != p)
    {
        cout << "Multiplication Not Possible";
        return 0;
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < q; j++)
        {
            mul[i][j] = 0;

            for(int k = 0; k < n; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < q; j++)
        {
            cout << mul[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}