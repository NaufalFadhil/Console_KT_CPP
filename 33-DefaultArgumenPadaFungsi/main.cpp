#include <iostream>

using namespace std;

double volume_kubus(double p = 1, double l = 2, double t = 3);

int main()
{
    cout << "volume kubus 1 : " << volume_kubus(3,4,5) << endl;
    cout << "volume kubus 2 : " << volume_kubus(3,4) << endl;
    cout << "volume kubus 3 : " << volume_kubus(3) << endl;
    cout << "volume kubus 4 : " << volume_kubus() << endl;

    return 0;
}

double volume_kubus(double p, double l, double t) {
    return p * l * t;
}
