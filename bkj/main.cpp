#include <iostream>

using namespace std;

void fungsi () {
    for (int i = 0; i < 10; i++) {
        cout <<  i << endl;
    }
}


int main()
{

    fungsi();
    /*
    int x;
    cout << "Masukkan Jumlah array :" << endl;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++) {
        cout << "Masukkan Index ke - " << i +1 << " = ";
        cin >> arr[i];
    }
    cout << " Hasil :" << endl;
    for (int i = 0; i < x; i++) {
        cout << "Hasil  index ke - " << i+1 << " = ";
        cout << arr[i] << endl;
    }
    cout << "Hasil Penjumlahan setiap index array :" << endl;
    int hasil = 0;
    for(int i = 0; i < x; i++) {
        hasil += arr[i];
    }
    cout << "Hasil Penjumalahan setiap idex array = " << hasil << endl;
*/
    return 0;
}
