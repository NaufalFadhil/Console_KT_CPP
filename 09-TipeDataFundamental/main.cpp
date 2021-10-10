#include <iostream>
#include <limits>

using namespace std;

int main()
{

    long long beta = 2;
    cout << beta << " : " << sizeof(beta) << " byte" << endl;


    int alpha = 2147483690;

    // Ukuran tipe data
    cout << alpha << " : " << sizeof(alpha) << " byte" << endl;
    // 1 byte = 8bit
    // memorry management menggunkana byte
    // 4 byte = 32 bit, ini integer
    // karena ada +- dikurang 1 jadinya sisa 31-bit
    // 2 pangkat 31 = 2147483648 - 1
    // min -2147483648

    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;
    // Jika nilai int melebihi nilai batas maka akan kembali ke - (minus)

    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<long long>::min() << endl;

    // Bilangan bulat
    int a = 5;
    long b = 6;
    short c = 7;

    // Bulangan Decimal
    float d = 1.0;
    double e = 2.5;

    // Karakter tunggal
    char f = 'A';

    // Boolean
    bool g = true;

    unsigned int h = 100;

    return 0;
}
