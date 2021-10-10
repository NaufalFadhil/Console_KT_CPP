#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 2;

    bool hasilSatu, hasilDua;

    // Komparasi, Relation Expression

    // Sebanding
    cout << (a == b) << endl; // Output 1 : True
    b = 3;
    hasilSatu = (a == b);
    cout << hasilSatu << endl; // Output 0 : False

    // Tidak sebanding
    hasilDua = (a != b);
    cout << hasilDua << endl; // Output 1 : True


    // Kurang dari
     hasilDua = (a < b);
    cout << hasilDua << endl; // Output 1 : True
    // Lebih dari
    hasilDua = (a > b);
    cout << hasilDua << endl; // Output 0 : False

    // Saling membandingkan
    a = 2;
    b = 2;
    hasilDua = (a <= b);
    hasilDua = (a >- b);
    cout << hasilDua << endl; // Output 1 : True
    cout << hasilDua << endl; // Output 0 : False

    cout << "Hello world!" << endl;
    return 0;
}
