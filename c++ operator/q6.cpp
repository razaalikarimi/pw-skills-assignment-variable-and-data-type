#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "enter the value of a and b:";
    cin >> a >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int division = a / b;
    int module = a % b;

    cout << sum << endl;
    cout << difference << endl;
    cout << product << endl;
    cout << division << endl;
    cout << module;

    return 0;
}