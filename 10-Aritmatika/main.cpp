#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 4;

    int hasil;
    // Operator +, -, *, /, %

    // Pejumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // Pengurangan
    hasil = a - b;
     cout << a << " - " << b << " = " << hasil << endl;

    // Pembagian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // Perkalian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // Modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // Penggunaan Float pada pembagian
    int c = 6;
    float d = 4.0;
    cout << a << " / " << b << " = " << c / d << endl;

    // KuKaBaTaKur
    hasil = a + b * a;
    cout << "a + b * a = " << hasil << endl;

    hasil = (a + b) * a;
    cout << "(a + b) * a = " << hasil << endl;

    return 0;
}
