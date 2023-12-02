#include <iostream>

using namespace std;

//Procedure input nama

 void inputNama (int &umurku) {
    string nama, NIM;
    cout << "Masukkan Nama :"; getline(cin , nama);
    cout << "Masukkan NIM :"; cin >> NIM;
    cout << "Masukkan Umur :"; cin >> umurku;
 }

 //fungsi menghitung umur

 int hitungUmur (int umurku) {
    return umurku;
 }

 // Fungsi ganjil genap

 string ganjilGenap (int bilangan) {
    if (bilangan % 2 == 1) {
        return "ganjil";
    } else {
        return "genap";
    }
 }

int main()
{
    int hasil, umurku;
    // Memanggil procedure input nama

    inputNama (umurku);

    // Memanggil fungsi Menghitung umur
    hasil = hitungUmur(umurku);

    // Menentukan hasil perhitungan
    cout << "Umurku adalah " << hasil << " tahun yang merupakan bilangan " << ganjilGenap(hasil);
    return 0;
}
