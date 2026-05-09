#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;

    cin >> a >> b >> c;

    d = (b * b) - (4 * a * c);

    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2;
    }
    else if(d == 0)
    {
        r1 = -b / (2 * a);

        cout << "Both roots are equal = " << r1;
    }
    else
    {
        cout << "Imaginary roots";
    }

    return 0;
}