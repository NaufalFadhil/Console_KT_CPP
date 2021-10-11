#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 2;

    bool hasil;

    // operator logika : not, and, or

    // not
    hasil = (a == 3);
    cout << hasil << endl; // out: 1
    hasil = !(a == 3);
    cout << hasil << endl; // out: 0

    // AND : Kedua nilai benar menghasilkan nilai true
    cout << "Untuk AND \n";
    hasil = (a == 3) and (b == 2); // true and true
    cout << hasil << endl; // out: 1'
    hasil = (a == 4) and (b == 2); // false and true
    cout << hasil << endl; // out: 0
    hasil = (a == 3) && (b == 3); // false and true
    cout << hasil << endl; // out: 0
    hasil = (a == 4) && (b == 3); // false and false
    cout << hasil << endl; // out: 0

    // OR : Salah satu bernilai benar menghasilkan nilai true
    cout << "Untuk AND \n";
    hasil = (a == 3) or (b == 2); // true or true
    cout << hasil << endl; // out: 1'
    hasil = (a == 4) or (b == 2); // false or true
    cout << hasil << endl; // out: 0
    hasil = (a == 3) || (b == 3); // false or true
    cout << hasil << endl; // out: 0
    hasil = (a == 4) || (b == 3); // false or false
    cout << hasil << endl; // out: 0

    // OR : Keblaikannay
    cout << "Untuk AND \n";
    hasil = !((a == 3) and (b == 2)); // true and true
    cout << hasil << endl; // out: 1'
    hasil = !(a == 4) and (b == 2); // false and true
    cout << hasil << endl; // out: 0
    hasil = (a == 3) && !(b == 3); // false and true
    cout << hasil << endl; // out: 0
    hasil = (a == 4) && (b == 3); // false and false
    cout << hasil << endl; // out: 0

    return 0;
}
