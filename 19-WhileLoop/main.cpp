#include <iostream>

using namespace std;

int main()
{
    /* while(Syarat) {
        aksi
    }*/

    int x = 0;

    while(x <= 10) {
        cout << "I am " << x << endl;
        x += 2;
    }

    cout << "Finished!" << endl;
    return 0;
}
