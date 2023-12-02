// Nama     : Sahrul Amri
// NIM      : A11.2022.14613
// Kelompok : 4216
#include <iostream>

using namespace std;

struct jumlah {
        int x, y;
    };

struct staff {
        int nip;
        char nama[10];
    };

typedef struct mhs {
    char nim [15];
    char nama[10];
    int umur;

} halo;

typedef struct warga {
    char nik[15];
    char nama[25];
    int umur;
} war;

int main()
{


    // struct jumlah bil1;
    // bil1.x=11;
    // bil1.y=23;

    // cout << bil1.x+bil1.y << endl;

    // struct jumlah bil2;
    // bil2.x=11;
    // bil2.y=23;

    // cout << bil2.x+bil2.y << endl;




    struct staff orang1;
        cout << "Masukkan NIP :";
       cin >> orang1.nip;
       cout << endl;
       cout << "Masukkan Nama :";
       cin >> orang1.nama;
       cout << endl;

    struct staff orang2;
        cout << "Masukkan NIP :";
        cin >> orang2.nip;
        cout << endl;
        cout << "Masukkan Nama :";
        cin >> orang2.nama;
        cout << endl;

    struct staff orang3;
        cout << "Masukkan NIP :";
        cin >> orang3.nip;
        cout << endl;
        cout << "Masukkan Nama :";
        cin >> orang3.nama;
        cout << endl;

    struct staff orang4;
        cout << "Masukkan NIP :";
        cin >> orang4.nip;
         cout << endl;
        cout << "Masukkan Nama :";
        cin >> orang4.nama;
         cout << endl;

    struct staff orang5;
        cout << "Masukkan NIP :";
        cin >> orang5.nip;
         cout << endl;
        cout << "Masukkan Nama :";
        cin >> orang5.nama;
         cout << endl;

        cout << "Karyawan 1 :" << endl;
         cout << "NIP : " << orang1.nip << endl;
         cout << "Nama : " << orang1.nama << endl;
         cout << endl;
        cout << "Karyawan 2 :" << endl;
        cout << "NIP : " << orang2.nip << endl;
        cout << "Nama : " << orang2.nama << endl;
        cout << endl;
        cout << "Karyawan 3 :" << endl;
        cout << "NIP : " << orang3.nip << endl;
        cout << "Nama :" << orang3.nama << endl;
        cout << endl;
        cout << "Karyawan 4:" << endl;
        cout << "NIP : " << orang4.nip << endl;
        cout << "Nama : " <<orang4.nama << endl;
        cout << endl;
        cout << "Karyawan 5 :" << endl;
        cout << "NIP : " << orang5.nip << endl;
        cout << "Nama : " << orang5.nama << endl;
        cout << endl;


    halo mhs1;
    cout << "masukkan nim : ";
    cin >> mhs1.nim;
    cout << endl;
    cout << "masukkan nama :";
    cin >> mhs1.nama;
    cout << endl;
    cout << "masukkan umur :";
    cin >> mhs1.umur;
    cout << endl;

    halo mhs2;
    cout << "masukkan nim : ";
    cin >> mhs2.nim;
    cout << endl;
    cout << "masukkan nama :";
    cin >> mhs2.nama;
    cout << endl;
    cout << "masukkan umur :";
    cin >> mhs2.umur;
    cout << endl;

     halo mhs3;
    cout << "masukkan nim : ";
    cin >> mhs3.nim;
    cout << endl;
    cout << "masukkan nama :";
    cin >> mhs3.nama;
    cout << endl;
    cout << "masukkan umur :";
    cin >> mhs3.umur;
    cout << endl;

     halo mhs4;
    cout << "masukkan nim : ";
    cin >> mhs4.nim;
    cout << endl;
    cout << "masukkan nama :";
    cin >> mhs4.nama;
    cout << endl;
    cout << "masukkan umur :";
    cin >> mhs4.umur;
    cout << endl;

     halo mhs5;
    cout << "masukkan nim : ";
    cin >> mhs5.nim;
    cout << endl;
    cout << "masukkan nama :";
    cin >> mhs5.nama;
    cout << endl;
    cout << "masukkan umur :";
    cin >> mhs5.umur;
    cout << endl;

    cout << "Mahasiswa 1 : " << endl;
    cout << "NIM `: " << mhs1.nim << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Umur : " << mhs1.umur << endl;

    cout << "Mahasiswa 2 : " << endl;
    cout << "NIM `: " << mhs2.nim << endl;
    cout << "Nama : " << mhs2.nama << endl;
    cout << "Umur : " << mhs2.umur << endl;

    cout << "Mahasiswa 3 : " << endl;
    cout << "NIM `: " << mhs1.nim << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Umur : " << mhs1.umur << endl;

    cout << "Mahasiswa 4 : " << endl;
    cout << "NIM `: " << mhs4.nim << endl;
    cout << "Nama : " << mhs4.nama << endl;
    cout << "Umur : " << mhs4.umur << endl;

    cout << "Mahasiswa 5 : " << endl;
    cout << "NIM `: " << mhs5.nim << endl;
    cout << "Nama : " << mhs5.nama << endl;
    cout << "Umur : " << mhs5.umur << endl;

     war people[5];
    cout << "\t Daftar Kependudukan Warga Desa Sukarela " << endl;
     for (int i=0; i <=4; i++) {
        cout << " \t NIK : ";
        cin >> people[i].nik;
        cout << " \t Nama : ";
        cin >> people[i].nama;
        cout << " \t Umur : ";
        cin >>people[i].umur;
     }
     cout << endl;

     cout << " \t Hasil :" << endl;
     for (int j=0; j<=4; j++) {
        cout << " \t NIK : ";
        cout << people[j].nik;
        cout << endl;
        cout << "\t Nama : ";
        cout << people[j].nama;
        cout << endl;
        cout << " \t Umur : ";
        cout << people[j].umur;
        cout << endl;
     }
     return 0;
}
