#include <iostream>
using namespace std;

int main()
{
    char op;
    cout << "enter the operator: + , - , * , / ::>> ";
    cin>> op;
    float num1;
    cout << "enter the 1st number:";
    cin >> num1;

    float num2;
    cout << "enter the 2nd number:";
    cin >> num2;

    switch (op)
    {

    case '+':
        cout<<"num1+num2  ::> " << num1 + num2;
        break;

    case '-':
        cout <<" num1 - num2  ::> " << num1 - num2;
        break;

    case '/':
        cout<<"num1 / num  ::> " << num1 / num2;
        break;

    case '*':
        cout<<" num1 * num2  ::> " << num1 * num2;
        break;

    default:
        cout << "the operator  is not valid";
        break;
    }

    return 0;
}