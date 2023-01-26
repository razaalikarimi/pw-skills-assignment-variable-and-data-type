#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the value of x: " << endl;
    cin >> x;

    cout << "Enter the  value of y: " << endl;
    cin >> y;

    cout << (x == y) ? 1 : 0;
    
    return 0;
}