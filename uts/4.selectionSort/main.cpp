/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216

4. Buatlah Program Selection Sort dalam dalam C+
Selection Sort adalah algoritma pengurutan yang bekerja dengan terus mencari
elemen terkecil dalam array dan memindahkannya ke posisi yang benar. Buatlah
program yang mengimplementasikan algoritma Selection Sort dalam tema
perikanan
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Masukkan jumlah data berat ikan yang akan diurutkan: ";
    cin>>n;
    int arrIkan[n];
    int i, j;

    for(i=0;i<=n-1;i++) {
        cout << "Masukkan daftar berat ikan (gram) yang akan diurutkan "<< i+1 << " : ";
        cin >> arrIkan[i];
    }

    for(int i=0; i<n-1; i++) {
        int minimum = i;
            for(int j=i+1; j<n; j++) {
                if(arrIkan[minimum]>arrIkan[j]) {
                    minimum = j;
                    }
        }
    int temp = arrIkan[i];
    arrIkan[i] = arrIkan[minimum];
    arrIkan[minimum] = temp;
    }
    cout<<"Data berat ikan setelah diurutkan: ";
    for(i=0;i<=n-1;i++) {
        cout << " " << arrIkan[i] << " g ";
    }
    cout << endl;
    system("pause");
    
    return 0;
}
