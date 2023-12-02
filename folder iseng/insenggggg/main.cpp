#include <iostream>

using namespace std;

void bubbleSort (int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr [j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Masukkan jumlah index array :";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen-elemen array :";
    for (int a = 0; a < n; a++) {
        cout << "Array index ke- " << a << " :";
        cin >> arr[a];
    }

    bubbleSort(arr, n);

    cout << "Hasil pengurutan elemen-elemen array :" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
