#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    do
    {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cin >> choice;

        if(choice >= 1 && choice <= 4)
        {
            cin >> a >> b;
        }

        switch(choice)
        {
            case 1:
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                cout << "Result = " << a / b << endl;
                break;

            case 5:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice" << endl;
        }

    } while(choice != 5);

    return 0;
}