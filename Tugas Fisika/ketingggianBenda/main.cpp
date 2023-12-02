#include <iostream>

using namespace std;

double tinggiBendaWaktuTertentu(double vNol, double t, double g, double hNol) {
    double hasil = (vNol * t) + (0.5 * g * t * t);
    return hNol - hasil;
}

void showTinggiWaktuTertentu() {
    double vNol, t, g, hNol;

    cout << endl;
    cout << "menghitung jarak jatuh benda " << endl;

    cout << "h = Vo t + 1/2 gt^2" << endl;
    cout << "Masukkan Kecepatan Awal : ";
    cin >> vNol;
    cout << endl;
    cout << "Masukkan Waktu : ";
    cin >> t;
    cout << "Masukkan Percepatan Gravitasi : ";
    cin >> g;

    cout << "\t h = Vo t + 1/2 gt^2 " << endl;
    cout << "\t h = " << vNol << " x " << t << " + " << "1/2 " << g << " x " << t << "^2" << endl;
    double hasil = (vNol * t) + (0.5 * g * t * t);
    cout << "\t hasil : " << hasil << " m " << endl;

    cout << " mencari ketinggian benda pada waktu tertentu " << endl;

    cout << "Masukkan ketinggian awal :";
    cin >> hNol;
    cout << endl;
    cout << " ketinggian benda ketika t : " << "ho - ht" << endl;

    cout << " ketinggian benda ketika t : " << hNol << " - " << hasil << endl;
    cout << " ketinggian benda ketika t : " << tinggiBendaWaktuTertentu(vNol, t, g, hNol) << " m " << endl;
}

int main() {
    showTinggiWaktuTertentu();
    return 0;
}
