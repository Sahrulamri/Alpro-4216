/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216
*/
#include <iostream>

using namespace std;

void reverseArray (int arr[], int n) {
    if (n == 0)
        return;
    cout << arr[n - 1] << " ";

    reverseArray(arr, n - 1);
}

void printArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "rekursive dengan fungsi membalikan deret bilangan " << endl;
    int n;
    cout << "Masukkan jumlah bilangan :";
    cin >> n;
    int arr[n];

    // Masukkan nilai pada inndex array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    cout << "Array sebelum dibalik :";
    printArray(arr, n);

    cout << endl;

    cout << "Array setelah dibalik :";
    reverseArray(arr, n);
    cout << endl;

    return 0;
}
