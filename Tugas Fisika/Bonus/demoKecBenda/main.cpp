#include <iostream>

using namespace std;

float posisi (float a, float b, float c) {
    return (a * b) + (0.5 * b * c * c);
}

float kecepatan (float d, float e, float f) {
    return d + e * f;
}

void tampilPosisi () {
    float vNol,g, t;
    cout << "Mencari posisi" << endl;
    cout << "Untuk mencari posisi kita menggunakan rumus h = Vo t + 1/2 gt^2" << endl;
    cout << "Masukkan kecepatan awal :";
    cin >> vNol;
    cout << endl;
    cout << "Masukkan percepatan gravitasi :";
    cin >> g;
    cout << endl;
    cout << "Masukkan waktu :";
    cin >> t;
    cout << endl;
    cout << "Hasil :";
    cout << posisi(vNol, g, t) << " m" << endl;

}

void tampilKecepatan () {
    float vNol, g, t;
    cout << "Mencari kecepatan" << endl;
    cout << "Untuk mencari kecepatan kita menggunakan rumus Vt = Vo + gt " << endl;
    cout << "Masukkan kecepatan awal :";
    cin >> vNol;
    cout << endl;
    cout << "Masukkan percepatan gravitasi :";
    cin >> g;
    cout << endl;
    cout << "Masukkan waktu :";
    cin >> t;
    cout << endl;
    cout << "Hasil :";
    cout << kecepatan(vNol, g, t) << " m/s^2" << endl;
}

int main()
{
    string input;
    cout << "Bonus iseng, Demo untuk no. 3 contoh soal" << endl;
    cout << "Sebuah batu bermassa 2 kg dilepaskan dari keadaan diam dan jatuh secara bebas. \n Tentukan posisi dan laju batu tersebut setelah bergerak 1 s, 5 s dan 10 s." << endl;
    do {
        tampilPosisi();
        tampilKecepatan();
        cout << "lanjut? (y/n) : ";
        cin >> input;
    } while (input == "y" || input == "Y");
    cout << endl;

    return 0;
}
