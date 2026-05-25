#include <iostream>
using namespace std;

int main(){
    int num1=0, num2=0;
    char symbol=0;
    cout << "Enter number1: ";
    cin >> num1;

    cout << "Enter number2: ";
    cin >> num2;

    cout << "Enter operation (+,-,*,/,%) : ";
    cin >> symbol;

    switch (symbol)
    {
        case '+':   cout << num1 + num2;
        break;

        case '-':   cout << num1 - num2;
        break;

        case '*':   cout << num1 * num2;
        break;

        case '/':   cout << num1 / num2;
        break;

        case '%':   cout << num1 % num2;
        break;
    }
}
