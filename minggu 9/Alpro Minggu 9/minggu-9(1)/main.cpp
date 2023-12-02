/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216
*/

#include <iostream>

using namespace std;

//1
int fib (int n) {
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

//2
int pangkatRekursif (int x, int y) {
    if (y == 0)
        return 1;
    else
        return x * pangkatRekursif(x, y-1);
}

//3
int ambil (int bil, int i) {
    if (i == 1) {
        return 1;
    }
    else if (bil % i == 0) {
        return 1 + ambil(bil, --i);
    } else {
        return 0 + ambil(bil, --i);
    }
}

int cek (int bil) {
    if (bil > 1) {
        return (ambil(bil, bil) == 2);
    }
    else
        return false;
}

int main()
{
    //1
    int n;
    cout << "1. Seorang petambak ulung memiliki populasi ikan awal dan setiap generasi pertumbuhannya mengikuti pola urutan Fibonacci,\n bantulah petambak ulung itu untuk dapat menghitung jumlah populasi ikan pada generasi tertentu\n dengan menggunakan metode urutan Fibonacci. " << endl;
    cout << endl;
    cout << endl;
    cout << "Masukkan generasi: ";
    cin >> n;
    cout << "Jumlah populasi ikan pada generasi ke-" << n << " adalah " << fib (n)<< endl;

    cout << endl;
    cout << endl;

    //2
    int x, y;
    cout << "2. Seorang petambak ulung memiliki ikan yang awalnya memiliki ukuran tertentu \n dan setiap tahap pertumbuhan ukurannya berpangkat, \n bantulah petambak ulung tersebut agar dapat menghitung ukuran ikan \n pada tahap tertentu menggunakan bilangan berpangkat" << endl;
    cout << endl;
    cout << endl;
    cout << "Masukkan ukuran awal ikan: ";
    cin >> x;
    cout << "Masukkan pangkat pertumbuhan: ";
    cin >> y;

    cout << "Ukuran ikan tersebut setelah melalui berbagai tahap pertumbuhan adalah " << pangkatRekursif(x, y) << endl;

    cout << endl;
    cout << endl;

    //3
    int  bil;
    cout << "3. Seorang petambak ulung memiliki sejumlah ikan dan ikan-ikan tersebut diberikan nomor di tubuhnya, kemudian petambak ulung tersebut ingin memilih ikan-ikan yang memenuhi kriteria bilangan prima, bantulah petambak ulung tersebut agar dapat menerapkan konsep bilangan prima dalam pemilihan ikan." << endl;

    cout << endl;
    cout << endl;

    cout << "Masukkan nomor  yang tertulis pada ikan: ";
    cin >> bil;

    if (cek(bil)) {
        cout << "Nomor pada ikan tersebut termasuk bilangan prima" << endl;
    } else {
        cout << "nomor pada ikan tersebut bukan bilangan prima." << endl;
    }
    return 0;
}

