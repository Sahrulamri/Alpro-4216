#include <iostream>

using namespace std;

double kecKetikaT (double a, double b, double c) {
    return a + (b * c);
}

int main()
{
    double vNol, g, t;
    cout << "Menghitung Kecepatan Benda Setelah t Detik Jatuh" << endl;
    cout << "Vt = Vo + g t" << endl;
    cout << "Masukkan Kecepatan Awal :";
    cin >> vNol;
    cout << endl;
    cout << "Masukkan Kecepatan Gravitasi :";
    cin >> g;
    cout << endl;
    cout << "Masukkan Waktu :";
    cin >> t;
    cout << endl;
    cout << "Kecepatan Ketika t : Vo + g x t " << endl;
    cout << "Kecepatan Ketika t : " << kecKetikaT(vNol, g, t);
    cout << endl;
    return 0;
}
