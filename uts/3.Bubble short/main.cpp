/*
Nama     : Sahrul amri
NIM      : A11.2022.14613
Kelompok : 4216

3. Buatlah Program Bubble Sort dalam dalam C++
Bubble Sort adalah algoritma pengurutan yang bekerja dengan terus menukar
elemen yang bersebelahan jika mereka tidak dalam urutan yang benar. Buatlah
program yang mengimplementasikan algoritma Bubble Sort dalam tema
perkebunan

*/
#include <iostream>
using namespace std;
int main()
{
    cout << endl;

    // Data
    int arrAnggur[8] = {60, 22, 30, 90, 10, 56, 35, 76};

    // cek data
    cout << "Data tinggi bibit tanaman anggur di perkebunan (sebelum diurutkan) :"<< endl;
    for (int x = 0; x < 8; x++)
    {
        cout << arrAnggur[x] << "\t"; // 6,22,3,90,1
    }
    cout << endl;

    // rumus bubbleSort
    int i, j, temp;
    for (i = 0; i < 8 - 1; i++) // looping sebanyak 3 kali (kurang dari 4)
    {
        for (j = 0; j < 8 - i - 1; j++) // looping lagi sebanyak 2 kali (karena kurang dari i dimana i kurang dari 4)
        {
            if (arrAnggur[j] > arrAnggur[j + 1])
            {
                temp = arrAnggur[j];
                arrAnggur[j] = arrAnggur[j + 1];
                arrAnggur[j + 1] = temp;
            }
        }
    }

    // cek lagi
     cout << "Data tinggi bibit tanaman anggur di perkebunan (setelah diurutkan) :"<< endl;
    for (int x = 0; x < 8; x++)
    {
        cout << arrAnggur[x] << "\t";
    }
    cout << endl;

    cout << endl;
    return 0;
}
