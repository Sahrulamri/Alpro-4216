#include <iostream>

using namespace std;

double hitungl (double p, double l) {
    double L = p * l;
    return L;
}

void tampill (double p, double l) {
    cout << hitungl(p,l);

}

int main()
{

    double p, l, L;
    cout << "Masukkan Panjang: "; cin >> p;
    cout << endl;
    cout << "Masukkkan Lebar :"; cin >> l;
    cout << endl;

    tampill(p,l);

    return 0;
}
