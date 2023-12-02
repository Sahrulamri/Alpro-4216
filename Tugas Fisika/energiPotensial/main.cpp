#include <iostream>

using namespace std;

double energiPotensial(double a, double b, double c) {
    double hasil = a * b * c;
    return hasil;
}

int main()
{
    double mass, g, h;
    cout << "Program Menghitung Energi Potensial Gravitasi" <<endl;
    cout << "Masukkan Massa Benda :";
    cin >> mass;
    cout << "Masukkan Percepatan Gravitasi :";
    cin >> g;
    cout << "Masukkan Ketinggian :";
    cin >> h;
    cout << "Hasil Akhir :";
    cout << energiPotensial(mass, g, h);
    return 0;
}
