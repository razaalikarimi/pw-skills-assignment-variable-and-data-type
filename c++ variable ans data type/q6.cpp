#include <iostream>
using namespace std;
int main()
{

    int a = 2;
    int b = 3;
    int c;

    c = a;
    a = b;
    b = c;
    
    cout << "before swap the number : 2 3" << endl;

    cout << "after swap the number:" << a << " " << b;

    return 0;
}