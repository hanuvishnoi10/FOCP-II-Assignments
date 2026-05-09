#include <iostream>
using namespace std;

int main()
{
    int marks[5], total = 0;
    float percentage;

    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        total = total + marks[i];
    }

    percentage = total / 5.0;

    cout << "Total = " << total << endl;
    cout << "Percentage = " << percentage;

    return 0;
}