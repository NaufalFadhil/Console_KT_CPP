#include <iostream>

using namespace std;

int kuadrat(int x) {
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b) {
    int hasil;
    hasil = a + b;
    return hasil;
}

int main()
{
    int input, hasil;
    cout << "Masukkan kuadrat dari : ";
    cin >> input;

    hasil = kuadrat(input);
    cout << hasil << endl;

    int a, b;
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;

    hasil = tambah(a,b);
    cout << hasil << endl;
    return 0;
}
