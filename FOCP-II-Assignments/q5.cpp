#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class MovieTicket
{
    unordered_map<int, unordered_set<int>> m;

public:

    bool BOOK(int x, int y)
    {
        if (m[y].count(x) || m[y].size() >= 100)
            return false;

        m[y].insert(x);
        return true;
    }

    bool CANCEL(int x, int y)
    {
        if (!m[y].count(x))
            return false;

        m[y].erase(x);
        return true;
    }

    bool IS_BOOKED(int x, int y)
    {
        return m[y].count(x);
    }

    int AVAILABLE_TICKETS(int y)
    {
        return 100 - m[y].size();
    }
};

int main()
{
    int q;
    cin >> q;

    MovieTicket obj;

    while (q--)
    {
        string s;
        cin >> s;

        if (s == "BOOK")
        {
            int x, y;
            cin >> x >> y;

            if (obj.BOOK(x, y))
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }

        else if (s == "CANCEL")
        {
            int x, y;
            cin >> x >> y;

            if (obj.CANCEL(x, y))
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }

        else if (s == "IS_BOOKED")
        {
            int x, y;
            cin >> x >> y;

            if (obj.IS_BOOKED(x, y))
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }

        else if (s == "AVAILABLE_TICKETS")
        {
            int y;
            cin >> y;

            cout << obj.AVAILABLE_TICKETS(y) << endl;
        }
    }

    return 0;
}