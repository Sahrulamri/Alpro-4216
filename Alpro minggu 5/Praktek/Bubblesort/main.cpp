/*
Nama     : Sahrul Amri
NIM      : A112022.14613
Kelompok : 4216
*/
#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
  int i, j, temp;
  for (i = 0; i < n; i++){
    for (j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main(){
  int array[100], n, i, j;
  cout << "Masukkan jumlah elemen array: ";
  cin >> n;
  cout << "Masukkan nilai array: \n";
  for (i = 0; i < n; i++){
    cin >> array[i];
  }
  bubbleSort(array, n);
  cout << "Hasil pengurutan :\n";
  for (i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "\n";

  return 0;
}

