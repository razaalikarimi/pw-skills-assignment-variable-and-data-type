#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << ("enter the number of row") << endl;
    cin >> row;
    cout << ("enter the number of column");
    cin >> column;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {

            cout << ("*");
        }
        cout << endl;
    }
    return 0;
}