#include <iostream>
#include <cstdlib> // Mengandung fungsi randoom

using namespace std;

int main()
{
    //for(int i = 0; i < 10; i++){
      //  cout << 1 + (rand() % 6) << endl;
    //}

    char lanjut;
    while(true) {
        cout << "Lempar dadu? (y/n) : ";
        cin >> lanjut;

        if(lanjut == 'y'){
            cout << 1 + (rand() % 6) << endl;
        } else if (lanjut == 'n') {
            cout << "Terima kasih telah bermain" << endl;
            break;
        } else {
            cout << "Salah memasukkan nilai" << endl;
        }
    }

    cout << "Finish!" << endl;
    return 0;
}
