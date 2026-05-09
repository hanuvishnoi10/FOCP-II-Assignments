#include <iostream>
using namespace std;

int main()
{
    int n;
    float salary, bonus, netSalary;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> salary;

        bonus = salary * 12 / 100;
        netSalary = salary + bonus;

        cout << "Employee " << i << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Net Salary = " << netSalary << endl;
    }

    return 0;
}