#include <iostream>

#include <iostream>

void cekGenapGanjil(int bilangan) {
    if (bilangan % 2 == 0) {
        std::cout << bilangan << " adalah bilangan genap." << std::endl;
    } else {
        std::cout << bilangan << " adalah bilangan ganjil." << std::endl;
    }
}

int main() {
    int bilangan;
    std::cout << "Masukkan sebuah bilangan: ";
    std::cin >> bilangan;

    cekGenapGanjil(bilangan);

    return 0;
}
