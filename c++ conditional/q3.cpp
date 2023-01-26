#include <iostream>
using namespace std;
int main()
{
    int cost_price;
    int selling_price;

    cout << "enter the cost price:";
    cin >> cost_price;

    cout << "enter the selling price:";
    cin >> selling_price;

    int Profit = selling_price - cost_price;
    int Loss = cost_price - selling_price;
    
    if (cost_price < selling_price)
    {
        cout << "profit>>:" << Profit << endl;
    }
    else
    {
        cout << "loss>>:" << Loss << endl;
    }
    return 0;
}