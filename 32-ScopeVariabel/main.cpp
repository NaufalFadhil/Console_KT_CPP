#include <iostream>

using namespace std;

int x = 10; // variable global

int get_global() {
    return x;
}

int get_local(){
    int x = 5; // variable local
    return x;
}

int main()
{
    cout << "1. variabel global : " << x << endl;
    x = 8; // variabel local
    cout << "2. variabel local main : " << x << endl;
    cout << "3. variabel get_global : " << get_global() << endl;
    cout << "4. variabel local main : " << x << endl;
    cout << "5. variabel get_local : " << get_local() << endl;
    cout << "6. variabel local main : " << x << endl;

    // Block Variabel
    if(true){
        cout << "7. variabel local main : " << x << endl;
        x = 1;
        cout << "8. variabel block : " << x << endl;
        cout << "9. variabel x terjauh : " << ::x << endl;
    }
    cout << "10. variabel local main : " << x << endl;
    return 0;
}
