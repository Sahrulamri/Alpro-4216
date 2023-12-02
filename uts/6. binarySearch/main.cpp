/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216

6. Buatlah Program Binary Search dalam dalam C++
Binary Search adalah algoritma pencarian yang bekerja dengan membagi list
menjadi dua setiap iterasi hingga elemen yang dicari ditemukan. Algoritma ini
membutuhkan list yang sudah terurut. Buatlah program yang
mengimplementasikan algoritma Binary Search dalam tema pertanian

*/
#include <iostream>
using namespace std;

// Fungsi untuk melakukan binary search
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Jika target ditemukan
        if (arr[mid] == target)
            return mid;

        // Jika target lebih kecil, cari di sebelah kiri
        if (arr[mid] > target)
            high = mid - 1;

        // Jika target lebih besar, cari di sebelah kanan
        else
            low = mid + 1;
    }

    // Jika target tidak ditemukan
    return -1;
}

// Fungsi untuk melakukan selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah bibit cabai: ";
    cin >> n;

    int ikan[n];
    cout << "Masukkan ukuran bibit cabai (dalam cm): " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Daftar ukuran bibit cabai ke- "<< i+1 << " : ";
        cin >> ikan[i];
    }

    // Mengurutkan array ikan menggunakan selection sort
    selectionSort(ikan, n);

    int target;
    cout << "Masukkan ukuran bibit cabai yang ingin dicari: ";
    cin >> target;

    // Melakukan binary search pada array ikan yang telah terurut
    int hasil = binarySearch(ikan, 0, n - 1, target);

    // Menampilkan hasil pencarian
    if (hasil == -1) {
        cout << "Bibit cabai dengan ukuran " << target << " cm tidak ditemukan." << endl;
    } else {
        cout << "Bibit cabai dengan ukuran " << target << " cm ditemukan pada indeks ke-" << hasil << "." << endl;
    }

    return 0;
}
