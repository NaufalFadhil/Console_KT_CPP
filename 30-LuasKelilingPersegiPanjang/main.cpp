#include <iostream>

using namespace std;

double hitung_luas(double p, double l){
    return p * l;
}

double hitung_keliling(double p, double l) {
    int keliling = 2 * (p * l);
    return keliling;
}

void tampilkan_luas(int panjang, int lebar) {
    cout << "Luasnya adalah ";
    cout << hitung_luas(panjang,lebar) << endl;
}

void tampilkan_keliling(int panjang, int lebar) {
    cout << "Lebarnya adalah ";
    cout << hitung_keliling(panjang,lebar) << endl;
}

int main() {
    double panjang, lebar, hasil;
    cout << "Panjang : ";
    cin >> panjang;
    cout << "Lebar : ";
    cin >> lebar;

    tampilkan_luas(panjang,lebar);
    tampilkan_keliling(panjang,lebar);
    return 0;
}
