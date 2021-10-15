#include <iostream>

using namespace std;

// Reporter
int kuadrat(int x) {
    int y;
    y = x * x;
    return y;
}

// Worker
void tampilkan(int input) {
    cout << "print with void" << endl;
    cout << input << endl;
}

int main()
{
    int input, hasil;
    cout << "Masukkan kuadrat dari : ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);
    return 0;
}
