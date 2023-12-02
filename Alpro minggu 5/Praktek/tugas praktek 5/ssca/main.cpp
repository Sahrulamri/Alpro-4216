#include <iostream>

using namespace std;

int main()
{
    int x;
    int baris[x][2];
    int pilihan;


    cout << "pilih menu anda:" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Sequential sort" << endl;
    cout << "4. Binary Sort" << endl;
    cout << "5. Tampilkan baris" << endl;
    cout << "pilih :";
    cin >> pilihan;
    cout << endl;

    if(pilihan == 1) {
        cout << "Masukkan jumlah mahasiswa:";
        cin >> x;
        for(int i=0; i<x; i++) {
            for (int j=0; j<2; j++) {
                cin >> baris[i][j];
            }
        }
        int a, b, temp;
    for (a = 0; a < x - 1; a++)
    {
        for (b = 0; b < x - a - 1; b++)
        {
            if (baris[b] > baris[b + 1])
            {
                temp = baris[b];
                baris[b] = baris[b + 1];
                baris[b + 1] = temp;
            }
        }
    }

    // Tampilkan Hasil BubbleSort
    cout << "Hasil Bubble Sort : ";
    for (int c = 0; c < x; c++)
    {
        cout << baris[c] << " ";
    }

    cout << endl;

    }
    return 0;
}
