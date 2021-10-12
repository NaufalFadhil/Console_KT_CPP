#include <iostream>

using namespace std;

int main() {

    // Increment dan Decrement
    // Preincrement dan postincrement

    int a = 5;
    int b = 5;

    // Postincrement
    cout << a << endl;
    cout << a++ << endl;; // a = a + 1; // Print dulu lalu ditambah
    cout << a << endl << endl;

    // Preincremeny
    cout << b << endl;
    cout << ++b << endl; // a = 1 + b; // ditambah dulu lalu di print
    cout << b << endl << endl;

    a = 5; b=5;
    // Postincrement
    cout << a << endl;
    cout << a-- << endl;; // a = a + 1; // Print dulu lalu ditambah
    cout << a << endl << endl;

    // Preincremeny
    cout << b << endl;
    cout << --b << endl; // a = 1 + b; // ditambah dulu lalu di print
    cout << b << endl;


    return 0;
}
