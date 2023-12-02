/*
Nama : Sahrul Amri
NIM : A11.2022.14613
Kelompok : 4216

1. Buatlah Function dan Procedure dalam C++
Tulislah sebuah function dalam C++ yang menghitung luas persegi panjang, dan
sebuah procedure yang mencetak hasilnya
*/
#include <iostream>


// 1
using namespace std;

double hitungl (double p, double l) {
    double L = p * l;
    return L;
}

void tampill (double p, double l) {
    cout << hitungl(p,l);

}

int main()
{

    double p, l, L;
    cout << "Masukkan Panjang: "; cin >> p;
    cout << endl;
    cout << "Masukkkan Lebar :"; cin >> l;
    cout << endl;

    cout << "Luas = ";
    tampill(p,l);
    cout << " cm" << endl;

    return 0;
}




