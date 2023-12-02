#include <iostream>

using namespace std;

void bubbleSort (int arr[],int n) {
    int i,j,minimum, temp;
    for(i=0; i < n; i++) {
        minimum = i;
        for (j = i + 1; j < n; j++) {
            if (arr[minimum] > arr[j]) {
                minimum = j;
            }
            temp =arr[i];
            arr[i]= arr[minimum];
            arr[minimum]= temp;
        }
        }
    }


int main()
{
    int n;
    cout << "Masukkan jumlah array :";
    cin >> n;
    int arr[n];
    cout << "Masukkan jumlah array ke index :"<< endl;
    for (int i =0; i < n; i ++) {
        cout << "Array index ke -" << i << " :";
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "Hasil pengurutan elemen-elemen array :" << endl;
    for (int a=0; a< n; a++) {
        cout << arr[a] << " ";
    }
    cout << endl;
    return 0;
}
