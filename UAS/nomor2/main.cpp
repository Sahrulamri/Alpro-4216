/*
Nama : Sahrul Amri
NIM : A11.2022.14613
Kelompok : 4216

Nomor 2

Buatlah sebuah fungsi ubahBerat yang menerima parameter berupa pointer ke array dinamis
ikan dan nama ikan yang ingin diubah beratnya. Fungsi ini akan mengubah berat ikan yang
sesuai dengan nama yang diberikan menjadi 2 kali lipat berat aslinya.

*/

#include <iostream>
#include <string>
using namespace std;

struct Ikan {
    string nama;
    double berat;
};

void ubahBerat(Ikan* koleksiIkan, int ukuran, const string& namaIkan) {
    for (int i = 0; i < ukuran; i++) {
        if (koleksiIkan[i].nama == namaIkan) {
            koleksiIkan[i].berat *= 2;
            break;
        }
    }
}

void tampilkanKoleksi( Ikan* koleksiIkan, int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        cout << "- Nama: " << koleksiIkan[i].nama << ", Berat: " << koleksiIkan[i].berat << endl;
    }
}

int main() {
    int ukuran;
    cout << "Program Menghitung Koleksi Ikan " << endl;
    cout << "Jumlah koleksi ikan: ";
    cin >> ukuran;

    Ikan* koleksiIkan = new Ikan[ukuran];

    cout << "Koleksi ikan:" << endl;
    for (int i = 0; i < ukuran; i++) {
        cout << "- Nama: ";
        cin >> koleksiIkan[i].nama;
        cout << "- Berat: ";
        cin >> koleksiIkan[i].berat;
    }

    string namaIkan;
    cout << "Nama ikan yang ingin diubah beratnya: ";
    cin.ignore();
    getline (cin, namaIkan);

    ubahBerat(koleksiIkan, ukuran, namaIkan);

    cout << "Output (setelah beratnya berubah):" << endl;
    tampilkanKoleksi(koleksiIkan, ukuran);

    delete[] koleksiIkan;

    return 0;
}
