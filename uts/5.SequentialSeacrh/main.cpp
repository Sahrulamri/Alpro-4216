/*
Nama : Sahrul Amri
NIM : A11.2022.14613
Kelompok : 4216

5. Buatlah Program Sequential Search dalam dalam C++
Sequential Search adalah algoritma pencarian yang bekerja dengan mencari satu
per satu elemen dalam list hingga elemen yang dicari ditemukan. Buatlah
program yang mengimplementasikan algoritma Sequential Search dalam tema
perikanan
*/

#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    //------------------------------//

    // Data
    int x;
    int arrIkan[12] = {600, 220, 300, 90, 100, 1000, 2500, 400, 500, 200, 500, 332};

    // Cek Data
    cout << "Data penangkapan ikan dalam 1 tahun terakhir (ton)" << endl;
    for (int x = 0; x < 12; x++)
    {
        cout << arrIkan[x] << "\t";
    }
    cout << endl;
    cout << endl;

    // Sequential aka Brute-Force

    cout << "Data penangkapan ikan  yang di cari : ";
    cin >> x;
    for (int i = 0; i < 12; i++)
    {
        if (x == arrIkan[i])
        {
            cout << "Ketemu, Disini : di urutan ke-" << i+1;
        }
    }

    //------------------------------//
    cout << endl;
    return 0;
}
