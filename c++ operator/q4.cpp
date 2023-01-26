#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the number:";
    cin >> n;
    
    int a, b, c, d, e, sum;

    a = n / 10000;
    n = n % 1000;

    b = n / 1000;
    n = n % 1000;

    c = n / 100;
    n = n % 100;

    d = n / 10;
    n = n % 10;

    sum = a + d;

    cout << "the sum of 1st and second last:" << sum;

    return 0;
}
