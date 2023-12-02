/*
Nama : Sahrul Amri
NIM : A11.2022.14613
Kelompok : 4216

2. Buatlah Program Bogo Sort dalam dalam C++
Bogo Sort adalah algoritma pengurutan yang mengandalkan keberuntungan.
Algoritma ini terus mengacak array hingga array tersebut terurut. Buatlah
program yang mengimplementasikan algoritma Bogo Sort dalam tema pertanian
*/

// 2.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Fungsi untuk memeriksa apakah array sudah terurut secara membesar
bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Prosedur untuk mengacak urutan elemen dalam array
void shuffle(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int j = i + rand() % (size - i);
        swap(arr[i], arr[j]);
    }
}

// Prosedur untuk mencetak elemen-elemen dalam array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Prosedur untuk mengimplementasikan algoritma Bogo Sort dalam tema pertanian
void bogoSortInAgriculture(int arr[], int size) {
    int iteration = 1;
    while (!isSorted(arr, size)) {
        cout << "Iterasi " << iteration << ": ";
        printArray(arr, size);
        shuffle(arr, size);
        iteration++;
    }
    cout << "Hasil data yang sudah diurutkan: ";
    printArray(arr, size);
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    int size;
    cout << "Masukkan jumlah tanaman: ";
    cin >> size;

    int* data = new int[size];

    cout << "Masukkan tinggi bibit tanaman: ";
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }

    cout << "Data tinggi bibit setelah diurutkan: ";
    printArray(data, size);

    bogoSortInAgriculture(data, size);

    delete[] data;

    return 0;
}
