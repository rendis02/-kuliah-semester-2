#include<iostream>
using namespace std;

int main() {
    int angka[5];
    int *p;

    p = angka;
    *p + 10;
    p++;
    *p = 20;
    p = &angka[2];
    *p = 30;
    p = angka + 3;
    *p = 40;
    p = angka;
    *(p+4) = 50;

    for (int i = 0; i < 5;i++){
        cout << angka << ",";
    }
    cout << angka << endl;

    return 0;
}
