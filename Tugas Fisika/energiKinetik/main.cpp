#include <iostream>

using namespace std;

float energiKinetik(float a, float b) {
    return 0.5 * a * b * b;
}

int main()
{
    float mass;
    float kec;
    cout << "Program Hitung Energi Kinetik " << endl;
    cout << "Masukkan Massa :";
    cin >> mass;
    cout << endl;
    cout << "Masukkan Kecepatan ";
    cin >> kec;
    cout << endl;
    cout << " Hasil :";
    cout << "\t" << energiKinetik(mass, kec);
    cout << endl;
    return 0;
}
