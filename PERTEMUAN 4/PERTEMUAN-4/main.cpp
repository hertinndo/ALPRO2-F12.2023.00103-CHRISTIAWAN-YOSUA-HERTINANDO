#include <iostream>

#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    if (angka % 3 == 0) {
        cout << angka << " adalah kelipatan 3." << endl;
    } else {
        cout << angka << " bukan kelipatan 3." << endl;
    }

    return 0;
}
