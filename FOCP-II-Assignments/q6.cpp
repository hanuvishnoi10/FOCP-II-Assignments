#include <iostream>
#include <map>
using namespace std;

class Bank
{
    map<int, int> acc;

public:
    bool create(int x, int y)
    {
        if (acc.find(x) == acc.end())
        {
            acc[x] = y;
            return true;
        }
        else
        {
            acc[x] += y;
            return false;
        }
    }

    bool debit(int x, int y)
    {
        if (acc.find(x) == acc.end() || acc[x] < y)
        {
            return false;
        }

        acc[x] -= y;
        return true;
    }

    bool credit(int x, int y)
    {
        if (acc.find(x) == acc.end())
        {
            return false;
        }

        acc[x] += y;
        return true;
    }

    int balance(int x)
    {
        if (acc.find(x) == acc.end())
        {
            return -1;
        }

        return acc[x];
    }
};

int main()
{
    Bank b;

    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;

        if (s == "CREATE")
        {
            int x, y;
            cin >> x >> y;
            cout << (b.create(x, y) ? "true" : "false") << endl;
        }

        else if (s == "DEBIT")
        {
            int x, y;
            cin >> x >> y;
            cout << (b.debit(x, y) ? "true" : "false") << endl;
        }

        else if (s == "CREDIT")
        {
            int x, y;
            cin >> x >> y;
            cout << (b.credit(x, y) ? "true" : "false") << endl;
        }

        else if (s == "BALANCE")
        {
            int x;
            cin >> x;
            cout << b.balance(x) << endl;
        }
    }

    return 0;
}