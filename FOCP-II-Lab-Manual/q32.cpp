#include <iostream>
using namespace std;

int main()
{
    int arr[5], largest, second;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    largest = second = arr[0];

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << second;

    return 0;
}