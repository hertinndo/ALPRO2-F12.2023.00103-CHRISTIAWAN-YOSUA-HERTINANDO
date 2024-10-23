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

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swapp(a[j], a[j + 1]); // Swap if the element found is greater
            }
        }
    }
}

int main() {
    int a = 10;
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

    int da[] = {34, 45, 67, 78, 36, 57};
    int n = sizeof(da) / sizeof(da[0]);

    cout << "Array printed from front (before sorting):" << endl;
    printFront(da, n);

    // Sort the array
    bubbleSort(da, n);

    cout << endl;
    cout << "Array printed from front (after sorting):" << endl;
    printFront(da, n);

    return 0;
}
