#include <iostream>
using namespace std;

int main()
{
    float salary[10], total = 0, average;

    for(int i = 0; i < 10; i++)
    {
        cin >> salary[i];
        total = total + salary[i];
    }

    average = total / 10;

    cout << "Total Salary = " << total << endl;
    cout << "Average Salary = " << average;

    return 0;
}