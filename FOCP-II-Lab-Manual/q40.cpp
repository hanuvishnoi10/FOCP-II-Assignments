#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, result = "";
    getline(cin, s);

    int words = 0, digits = 0, special = 0;
    bool space = false, valid = true;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ' ')
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                result += s[i] + 32;
            }
            else
            {
                result += s[i];
            }

            space = false;
        }
        else if(!space && result.length() > 0)
        {
            result += ' ';
            space = true;
        }
    }

    if(result[result.length() - 1] == ' ')
    {
        result.erase(result.length() - 1);
    }

    if(result[0] >= 'a' && result[0] <= 'z')
    {
        result[0] = result[0] - 32;
    }

    for(int i = 0; i < result.length(); i++)
    {
        if(result[i] == ' ')
        {
            words++;
        }
        else if(result[i] >= '0' && result[i] <= '9')
        {
            digits++;
        }
        else if(!((result[i] >= 'A' && result[i] <= 'Z') ||
                  (result[i] >= 'a' && result[i] <= 'z')))
        {
            special++;
            valid = false;
        }
    }

    words++;

    cout << "String = " << result << endl;
    cout << "Words = " << words << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special Characters = " << special << endl;

    if(valid)
    {
        cout << "Valid String";
    }
    else
    {
        cout << "Invalid String";
    }

    return 0;
}