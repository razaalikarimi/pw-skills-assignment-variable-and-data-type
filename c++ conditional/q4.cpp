#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter the number:";
    cin >> number;

    if (number > 0)
    {

        cout << "the number is positive:" << number << endl;
    }
    else
    {
        cout << "the number is negative:" << number << endl;
    }

    return 0;
}