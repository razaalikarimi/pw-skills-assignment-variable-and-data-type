#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the 3 digit number:";
    cin >> n;

    int a, b, c;

    a = n / 100;
    n=n%100;


    b = n / 10;
    c = n%10;

    int sum = a + b + c;
    cout << " the sum of number is:" << sum;

    return 0;
}