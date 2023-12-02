/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216
*/
#include <iostream>

using namespace std;

//Function
 int hitung_tigaBilangan(int x, int y, int z) {
        return x*y*z;
    }
string bilganjil (int umur) {
    if (umur % 2 == 1)
        return "ganjil";
    else if (umur % 2 == 0)
        return "genap";
    else
        return "tidak valid";
}
string bilgenap (int angka) {
    if (angka % 2 == 0)
        return " Angka Genap";
    else if (angka % 2 == 0)
        return "Angka Ganjil";
    else
        return "Angka Tidak Valid";
}


// Prosedur
void tampil() {
     string nama, nim;
    int umur;
    cout << "Nama : "; getline(cin, nama);
    cout << endl;
    cout << "NIM  :";
    cin >>nim;
    cout << endl;
    cout << "Umur :";
    cin >> umur;

}


int main()
{
    int umur;
    tampil();
    cout << bilganjil(umur);
    cout << endl;
    cout << bilgenap (12);


    /*
    cout << hitung_tigaBilangan(4,3,5) << endl;
    cout << hitung_tigaBilangan(3,1,6) << endl;
    cout << hitung_tigaBilangan(2,3,4) << endl;
    */
    return 0;
}
