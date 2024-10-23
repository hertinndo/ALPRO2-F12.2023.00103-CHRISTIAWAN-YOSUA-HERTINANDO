#include <iostream>

using namespace std;

void swapp(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printFront(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}

void printRear(int a[], int n) {
    for (int j = n - 1; j >= 0; j--) {
        cout << a[j] << endl;
    }
}

int main() {
    int a = 10;  // 4 bytes
    int b = 5;

    cout << "Before swap:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swapp(a, b);
    cout << "After swap:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    int da[] = {34, 45, 67, 78, 36, 57}; // Added missing semicolon
    int n = sizeof(da) / sizeof(da[0]);

    cout << "Array printed from front:" << endl;
    printFront(da, n);

    cout << "Array printed from rear:" << endl;
    printRear(da, n);

    return 0;
}
