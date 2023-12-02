/*
    Nama : Sahrul Amri
    NIM  : A11. 2022. 14613
    Kelompok : 4216
*/
#include <iostream>

using namespace std;


string cekgenap (int x) {
    if (x % 2 == 0) {
        return "Genap";
    } else if (x % 2 == 1) {
        return "Ganjil";
    } else {
        return "Tidak Valid";
    }
}

void bilgenap (int x) {
    if (x % 2 == 0) {
        cout << "Genap";
    } else if (x % 2 == 1) {
        cout << "Ganjil";
    } else {
        cout << "Tidak Valid";
    }
}
int main()
{

    int x;

    cout  << "Masukkan Bilangan :";
    cin >> x;
    cout << cekgenap(x);
    cout << endl;
    // output Procedure

     cout << "Masukkan Bilangan = ";
    cin >> x;
    cout << "Bilangan Anda  ";
    bilgenap(x);

    return 0;
}
