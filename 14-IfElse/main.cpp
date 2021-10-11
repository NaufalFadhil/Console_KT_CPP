#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Input Number : ";
    cin >> a;

    if (a == 5) {
        cout << "It is number Five" << endl;
    } else if (a == 3) {
        cout << "It is number Three" << endl;
    } else if (a == 1) {
        cout << "It is number One" << endl;
    } else {
        cout << "It is not number in One, Three, Five" << endl;
    }

    cout << "Finished!" << endl;
    return 0;
}
