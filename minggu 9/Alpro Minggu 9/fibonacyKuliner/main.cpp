/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216
*/
#include <iostream>

using namespace std;

int fib (int n) {
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main()
{
     int n;
    cout << "Seorang chef menggunakan urutan Fibonacci untuk menentukan jumlah bahan yang harus digunakan dalam sebuah resep untuk beberapa tahap, bantulah chef itu agar dapat menggunakan urutan tersebut untuk mengatur jumlah bahan yang diperlukan." << endl;
    cout << endl;
    cout << endl;
    cout << "Masukkan jumlah tahap: ";
    cin >> n;


    cout << endl;
    cout << "Jumlah bahan yang diperlukan chef itu untuk memasak adalah :";
    for (int i=1; i < n; i++) {
        fib (i);
        cout << fib (i) << " ";
    }

    cout << endl;
    cout << endl;
    return 0;
}
