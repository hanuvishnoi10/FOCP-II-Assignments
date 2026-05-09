#include <iostream>
using namespace std;

int main()
{
    string name;
    bool valid = true;

    cin >> name;

    for(int i = 0; i < name.length(); i++)
    {
        if(!((name[i] >= 'A' && name[i] <= 'Z') ||
             (name[i] >= 'a' && name[i] <= 'z') ||
             (name[i] >= '0' && name[i] <= '9')))
        {
            valid = false;
        }
    }

    if(valid)
    {
        cout << "Valid Username";
    }
    else
    {
        cout << "Invalid Username";
    }

    return 0;
}