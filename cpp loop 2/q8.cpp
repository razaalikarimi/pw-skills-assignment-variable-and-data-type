#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k;
    int Number = 3;
    int Banner = 0;
    cout << "Please enter the no of lines ";
    cin >> i;
    int d = i;
    for (j = 1; j <= i; j++)
    {
        for (int e = 1; e <= d; e++)
        {
            cout << " ";
        }
        if (j == 1)
        {
            cout << "2\n";
        }
        else
        {
            for (k = 0; k != j;)
            {
                Banner = 0;
                for (int k = 2; k < Number; k++)
                {
                    if ((Number % k) == 0)
                        Banner = 1;
                }
                if (Banner == 0)
                {
                    k++;
                    cout << Number << " ";
                }
                Number++;
            }
            cout << "\n";
        }
        d--;
    }

    return 0;
}