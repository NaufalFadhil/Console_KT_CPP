#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Input a number = ";
    cin >> a;

    /* switch(a == 5) {
        csse true:
            cout << "True! It's Five" << endl;
    } */

    switch(a) {
        case 1:
            cout << "A = 1" << endl;
            break;
        case 2:
            cout << "A = 2" << endl;
            break;
        case 3:
            cout << "A = 3" << endl;
            break;
        case 4:
            cout << "A = 4" << endl;
            break;
        case 5:
            cout << "A = 5" << endl;
            break;
        default:
            cout << "Number not found" << endl;
            break;
    }

    cout << "Finished" << endl;
    return 0;
}
