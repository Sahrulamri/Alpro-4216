#include <iostream>

using namespace std;

double hitungV( int I, int R) {
    int V = I * R;
    return V;
}

string statusV(int V) {

    if (V %2 == 0) {
        return "genap";
    }
     else if (V %2 == 1) {
        return "ganjil";
     }
     else {
        return "tidak valid";
     }

}

void tampilV (int I, int R) {
    int V = hitungV(I, R);
    cout << "Hambatan :" << endl;
    cout << "V \t= I x R" << endl;
    cout << "V \t=" << I << "x" << R << endl;
    cout << "V \t=" << V << endl;
}





int main()
{
// V = I x R
    int I, R, V;
    cout << "Masukkan I:"; cin >> I;
    cout << "Masukkan R:"; cin >> R;

    tampilV (I, R);
    cout << statusV (V);


    return 0;
}
