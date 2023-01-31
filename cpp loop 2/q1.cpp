#include <iostream>
using namespace std;
int main()
{

    int j, number;
    cout << "Enter number to finf factorial"<<endl;
    cin >> number;
    int fact = 1;
    for (j = 1; j <= number; j++)
    {
        fact = fact * j;
    }
    cout << "Factorial is:" << fact << "\n";

    return 0;
}