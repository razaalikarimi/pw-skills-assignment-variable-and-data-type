#include <iostream>
using namespace std;
int main()
{

    int length;
    int breadth;

    cout << "enter the value of length:";
    cin >> length;
    cout << "enter the value of breadth:";
    cin >> breadth;

    if (length == breadth)
    {

        cout << "it is a square";
    }
    else
    {

        cout << "it is a rectangle";
    }

    return 0;
}