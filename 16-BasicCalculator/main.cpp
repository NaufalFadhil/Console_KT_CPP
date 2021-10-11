#include <iostream>

using namespace std;

int main() {

    float a,b,result;
    char aritmatika;

    cout << "=== Welcome to Calculator Program ===\n\n";

    cout << "Input first number : ";
    cin >> a;
    cout << "Input arithmetics (+,-,/,*) : ";
    cin >> aritmatika;
    cout << "Input second number : ";
    cin >> b;

    cout << "The answer of ";
    cout << a << aritmatika << b << " is ";

    switch(aritmatika) {
        case '+':
            result = a + b;
            cout << result << endl;
            break;
        case '-':
            result = a - b;
            cout << result << endl;
            break;;
        case '*':
            result = a * b;
            cout << result << endl;
            break;
        case '/':
            result = a / b;
            cout << result << endl;
            break;
        default:
            cout << "\nOOPS!Your input is not arithmatics" << endl;
    }

    cout << "Finished!" << endl;
    return 0;
}
