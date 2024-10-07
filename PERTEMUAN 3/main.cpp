#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai terkecil
int find_minimum(int x, int y) {
    if (x < y)
        return x;
    else
        return y;
}

// Main function
int main() {
    int x, y;

    // Inisialisasi variabel x dan y
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;

    // Panggil fungsi untuk mencari nilai terkecil
    int minimum = find_minimum(x, y);

    // Tampilkan hasil
    cout << "Nilai terkecil antara " << x << " dan " << y << " adalah: " << minimum << endl;

    return 0;
}
