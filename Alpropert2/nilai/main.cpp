/*
    Nama     : Sahrul Amri
    NIM      :A11.2022.14613
    Kelompok : 4216
*/
#include <iostream>

using namespace std;

int nilaiAkhir(int tugas, int uts, int uas) {
    tugas = tugas * 40 / 100;
    uts = uts * 30 / 100;
    uas = uas * 30 / 100;
    return tugas + uts + uas;

}

void grade (int nilaiAkhir) {
    if (nilaiAkhir >= 90 && nilaiAkhir <= 100) {
        cout << "A";
    } else if (nilaiAkhir >= 80 && nilaiAkhir <= 89) {
        cout << "AB";
    } else if (nilaiAkhir >= 70 && nilaiAkhir <= 79)  {
        cout << "B";
    } else if (nilaiAkhir >= 60 && nilaiAkhir <= 69) {
        cout << "BC";
    } else if (nilaiAkhir >= 50 && nilaiAkhir <= 59) {
        cout << "C";
    } else if (nilaiAkhir <= 49 && nilaiAkhir >= 0) {
        cout << "D";
    } else {
        cout << "Nilai Tidak Valid";
    }

}

int main()
{
    int tugas, uts, uas;

    cout << "Masukkan Nilai Tugas :";
    cin >> tugas;
    cout << "Masukkan Nilai UTS :";
    cin >> uts;
    cout << "Masukkan Nilai UAS :";
    cin >> uas;


    cout << "Nilai Akhir = ";
    // grade

    int akhir = nilaiAkhir(tugas, uts, uas);
    grade(akhir);
    cout << endl;
    return 0;
}
