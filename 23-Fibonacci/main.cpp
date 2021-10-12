#include <iostream>

using namespace std;

int main()
{
    // 1 1 2 3 4
    // f_n = f_n1 + f_n2

    int n, f_n, f_n1, f_n2;
    cout << "Program Deret Fibonaci" << endl;
    cout << "Masukkan Nilai : ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n << " ";
    for(int i = 1; i < n; i++) {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;

        cout << f_n << " ";
    }
    return 0;
}
