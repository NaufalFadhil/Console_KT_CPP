#include <iostream>

using namespace std;

int main()
{
    // Assignment
    int a = 10;

    cout << "first condition of a is" << a << endl;

    // Assignment Operator
    // variable = variable + operator + expression
    // a, =, a, -, 3
    // a. +=. 3

    a += 3;
    cout << "add 3 = " << a << endl;

    a -= 3;
    cout << "min 3 = " << a << endl;

    a /= 3;
    cout << "div 3 = " << a << endl;

    a *= 3;
    cout << "mlt 3 = " << a << endl;

    a %= 3;
    cout << "mod 3 = " << a << endl;


    cout << "Finished!" << endl;
    return 0;
}
