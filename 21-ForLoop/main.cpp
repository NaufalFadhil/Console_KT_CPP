#include <iostream>

using namespace std;

int main()
{
    cout << "\n LOOP 1 \n" << endl;
    for(int counter = 1; counter <= 10; counter++) {
        cout << counter << endl;
    }

    cout << "\n LOOP 2 \n" << endl;
    for(int counter = 1; counter <= 10; counter += 2) {
        cout << counter << endl;
    }

    cout << "\n LOOP 3 \n" << endl;
    for(int counter = 1; counter >= -10; counter-- ) {
        cout << counter << endl;
    }

    cout << "\n LOOP 4 \n" << endl;
    int total = 0;
    for(int i = 1; i <= 10; i++) {
        total = total + i;
        cout << i << " || " << total << endl;
    }

    cout << "\n LOOP 5 \n" << endl;
    total = 0;
    for(int i = 1; i <= 10; i++, total += i) {
        cout << i << " || " << total << endl;
    }
    cout << "Finished!" << endl;
    return 0;
}
