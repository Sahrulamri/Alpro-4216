/*
Nama : Sahrul Amri
NIM  : A11.2022.14613
Kelompok : 4216
*/
#include <iostream>

using namespace std;

int faktorial (int n) {
    if (n == 1)
        return 1;
    else
        return n * faktorial (n - 1);

}


int main()
{
    cout << "Seorang petani yang memiliki sejumlah tanaman yang menghasilkan banyak sekali buah di perkebunannya, \n buah pada pohon-pohon itu membentuk bilangan faktorial,\n bantulah pak tani untuk menghitung buah hasil panennya dengan menggunakan faktorial!" << endl;
    int n;
    cout << "Masukkan jumlah pohon dalam perkebunan:";
    cin >> n;
    cout << "Jumlah total buah dalam perkebunan dengan " << n << " pohon adalah " <<  faktorial(n) << " buah" << endl;

    return 0;
}
