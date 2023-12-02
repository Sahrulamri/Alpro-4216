/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216
*/
#include <iostream>

using namespace std;

int fpb (int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return fpb(b, a%b);
    }

}

int main()
{
    int a, b;
    cout << " Seorang pemusik memiliki dua melodi atau akord dengan durasi yang berbeda,\n jika pemusik itu ingin meghitung durasi terpendek akord secara bersamaan, \n konsep perhitungan matematika jenis apa yang bisa digunakan untuk memnghitung durasi terpendek \n kedua akord tersebut?, \n bantulah pemusik itu dengan menggunakan suatu konsep perhitungan matematika \n untuk menentukan durasi terpendek yang dapat digunakan secara bersamaan." << endl;
    cout << endl;
    cout << endl;
    cout << " Masukkan durasi pertama: ";
    cin >> a;
    cout << " Masukkan durasi kedua: ";
    cin >> b;
    cout << endl;
    cout << endl;
    cout << " Durasi terpendek yang bisa digunakan secara bersamaan adalah " << fpb(a,b) << endl;
    return 0;
}
