/*
Nama     : Sahrul amri
NIM      : A11.2022.14613
Kelompok : 4216

Soal Nomor 1
Buatlah sebuah fungsi hitungIkan yang menerima parameter berupa hari (dalam bentuk
bilangan bulat) dan mengembalikan jumlah total ikan yang dapat ditangkap Andi pada hari
tersebut.
*/
#include <iostream>
using namespace std;

// x adalah hari
int hitungIkan(int x) {

    if(x == 1){
        return 3;
    }
    if(x <=7){
        return 2 * hitungIkan(x - 1);
    }
    if(x == 8){
        return ( 0.5 * 0.5 * (hitungIkan(x - 1) * 2));
    }
    if (x == 9 ) {
         return  hitungIkan(x - 1) +1;
    }
    return hitungIkan(x - 1) +1;

}

int main() {
  int hari;
  cout << "Masukkan Jumlah hari :";
  cin >> hari;
  int total = hitungIkan(hari);
  for (int i = 1; i<= hari; i++) {
    total = hitungIkan(i);
  }
  cout << "Jumlah ikan yang didapat Andi si nelayan ulung pada hari ke-" << hari << " adalah "  <<total << endl;
  return 0;
}
