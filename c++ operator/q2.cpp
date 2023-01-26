#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;

    cout << ((a < 50) && (a < b)) ? 1 : 0;

    return 0;
}