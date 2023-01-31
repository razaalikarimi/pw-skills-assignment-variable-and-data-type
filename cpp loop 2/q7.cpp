#include <iostream>
using namespace std;
int main()
{

    int n = 7;

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            if (i == (n - 1) / 2 || j == (n - 1) / 2)
            {
                cout << ("*");
            }
            else
            {
                cout << (" ");
            }
        }
        cout << endl;
    }

    return 0;
}