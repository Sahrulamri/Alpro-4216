/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216
*/

#include <iostream>

using namespace std;

struct orang {
    char nama[40];
    int kelas;
    char nim[20];
}saya;


int main()
{
    cout << "nama : "; cin.getline(saya.nama,40);
    cout << "kelas :"; cin >> saya.kelas;
    cout << "nim :"; cin >> saya.nim;
    cout << endl;

    cout << "Data mahasiswa " << endl;
    cout << " Nama : " << saya.nama << endl;
    cout << " Kelas : " << saya.kelas << endl;
    cout << " Nim :" << saya.nim << endl;
    return 0;
}
