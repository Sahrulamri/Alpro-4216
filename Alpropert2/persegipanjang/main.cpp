#include <iostream>

using namespace std;

float hitungl(int I, int R) {
    int V = I * R;
    return V;
}

string bilganjil(int a) {

    if (a % 2== 1) {
        return "ganjil";
    } else if (a % 2==0) {
        return "genap";
    } else {
        return "tidak valid";
    }
}

void tampill(int I, int R){
    int V = hitungl(I, R);
    cout << "V :" << V << endl;
}



int main()
{
    int I, R, hasil;
   string input;
    do {
   system ("cls");
   cout << "Hitung Voltase " << endl;
   cout << "Masukkan Kuat Arus :"; cin >> I;
   cout << endl;
   cout << "Masukkan Hambatan :"; cin >> R;
   cout << endl;
   hasil = tampill(I, R);
   cout << bilganjil(hasil);




   cout << "Ingin menghitung lagi?(yes/ no)";
   cin >> input;
    } while (input == "yes");
    cout << "Selesai" << endl;
    system ("cls");
    return 0;
}
