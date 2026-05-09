#include <iostream>
using namespace std;

int main()
{
    int itemNo, qty;
    float price, amount, discount, total;

    cin >> itemNo;
    cin >> qty;
    cin >> price;

    amount = qty * price;
    discount = amount * 20 / 100;
    total = amount - discount;

    cout << "Amount = " << amount << endl;
    cout << "Discount = " << discount << endl;
    cout << "Total Bill = " << total;

    return 0;
}