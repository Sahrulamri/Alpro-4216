#include <iostream>

using namespace std;

//SEQUENTIAL SEARCH
void sequentialSearch (int arr[], int n) {


    cout << "Masukkan jumlah elemen-elemen pada array : " << endl;
    for (int i =0; i < n; i++) {
        cout << "Array index ke- " << i << " :";
        cin >> arr[i];
    }
    //Munculkan data yang sudah diinputkan
    for (int k =0; k < n; k++) {
        cout << "Array index ke-" << k << " :";
        cout << arr[k];
        cout << endl;
    }
    bool ketemu = false;
    int cari;
    cout << "Masukkan data yang ingin dicari :";
    cin >> cari;
    cout << endl;

    for (int x = 0; x < n; x++)
    {
        if (cari== arr[x])
        {
            ketemu = true;
           cout << "Ketemu di index ke " << x << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Masukkan jumlah array :";
    cin >> n;

    int arr[n];


    sequentialSearch(arr, n);



    // Melakukan pencarian data


    cout << endl;
    return 0;
}
