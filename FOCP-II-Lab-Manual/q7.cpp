#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if(a > b && a > c)
    {
        cout << "Player 1 is the winner";
    }
    else if(b > a && b > c)
    {
        cout << "Player 2 is the winner";
    }
    else if(c > a && c > b)
    {
        cout << "Player 3 is the winner";
    }
    else
    {
        cout << "Match Draw";
    }

    return 0;
}