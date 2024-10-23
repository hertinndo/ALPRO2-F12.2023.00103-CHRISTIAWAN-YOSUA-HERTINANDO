#include <iostream>

using namespace std;

void swapp (int &a, int &b) {  //jika prosedur a dan b adalah input dan output maka menggunakan "&"
     int temp = a;
     a = b;
     b = temp;
}

void printFront(int a[], int n){

}

void printRear(int a[], int n){

}

void bubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){

            }
        }
    }
}

//mencetak dari belakang
for (int j=0; j<n; j--){
        cout << da[j] << endl;
    }

int main()
{
    /*int a = 10;  //4 bytes
    int b = 5;

    cout << "a:" << endl;
    cout << "b:" << endl;

    int temp = a;
    a = b;
    b = temp;

    swapp (a,b);
    cout << "setelah swap:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;
    */

    int da [] = {34, 45, 67, 78, 36, 57}
    int n = sizeof(da)/sizeof(da[0]);
    printFront(da, n)

    cout << endl;
    bubbleShort(da, n);
    printFront (da, n);
    for (int j=0; j<n; j--){
        cout << da[j] << endl;
    }

    /*j=6-1=5, 5<6, da[5]=57
    j=4, 4<6, da[4]=36
    j=3, 3<6, da[3]=78
    j=2, 2<6, da[2]=67
    j=1, 1<6, da[1]=45
    j=0, 0<6, da[0]=34
    j=-1, -1<6 da[-1]=0
    */

    return 0;
}
