#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Masukkan banyak pola : ";
    cin >> n;

    cout << "POLA 1" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPOLA 2" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPOLA 3" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = n; k >= i; k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPOLA 4" << endl;
    for(int i = 1; i <= n; i++){
        for(int k = n; k > i; k--){
            cout << " ";
        }

        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPOLA 5" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPOLA 6" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }

        for(int k = n; k >= (2*i-n); k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPOLA 7" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }

        for(int k = n; k >= (2*i-n); k--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
