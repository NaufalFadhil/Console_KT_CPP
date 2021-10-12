#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i <= 10; i++) {
        if(i == 5){
            break;
        }
        cout << i << endl;
    }
    cout << "Finish!" << endl;

    for(int i = 0; i <= 10; i++) {
        if(i == 5){
            continue;
        }
        cout << i << endl;
    }
    cout << "Finish!" << endl;
    return 0;
}
