#include <iostream>

// iostream akan menampikan ke teriminal
// ini adalah komentar
/* 
Multiline
commentar
*/

// Entry point
int main() {
    std::cout << "Hello World" << std::endl;
    std::cout << "Halo" << "Dunia" << std::endl;
    std::cin.get();
    // std = Standard library yang berasal dari iostream, untuk mengambil fungsi cout(console out) 
    return 0; 
    // Kenapa ada return karena tipe data yang kita gunakan adalah integer
}