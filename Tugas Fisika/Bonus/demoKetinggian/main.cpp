#include <iostream>
#include <cmath>

using namespace std;

float tinggi (float a, float b) {
    return a - b;
}
float kecepatan (float a, float b, float c) {
    return sqrt(a * a + 2 * b * c);
}


void tampilV () {
    float vNol, g, hAwal, hTentu;
    cout << endl;
    cout << "\t \t \t Mencari kecepatan akhir " << endl;
    cout << "Masukkan kecepatan awal :";
    cin >> vNol;
    cout << "Masukkan percepatan gravitasi : ";
    cin >> g;
    cout << endl;
    cout << "Mencari tinggi total  " << endl;
    cout << "Masukkan tinggi awal : ";
    cin >> hAwal;
    cout << endl;
    cout << "Masukkan tinggi ketika t : ";
    cin >> hTentu;
    cout << endl;
    cout << "Ketinggian total :" << endl;
    float hasil = tinggi(hAwal, hTentu);
    cout << "Tinggi akhir :" << hasil << "m" << endl;

    cout << "Kecepatan akhir :" << kecepatan(vNol, g, hasil) << "m/s^2";
}

int main()
{

    cout << "Mencari kecepatan " << endl;
    cout << " Suatu benda dilepaskan dari ketinggian 20 meter di atas tanah (g = 10 m/s^2).\n Berapakah kecepatan benda sesudah mencapai ketinggian 15 meter di atas tanah?" << endl;
    cout << "Untuk mencari kecepatan, kita menggunakan rumus vt^2 = Vo^2 + 2gh " << endl;
    tampilV();

    return 0;
}
