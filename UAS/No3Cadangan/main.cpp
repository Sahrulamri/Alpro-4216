/*
Nama : Sahrul Amri
NIM : A11.2022.14613
Kelompok : A11.2022. 14613

Nomor 3

Luffy adalah seorang nelayan yang mencari ikan di laut. Dia memiliki daftar tangkapan ikan yang
didapat setiap harinya. Daftar tangkapan tersebut berupa Single Linked List yang berisi nama-nama jenis ikan dan jumlahnya yang berhasil ditangkap. Setiap nama jenis ikan dapat muncul
lebih dari satu kali dalam daftar. Luffy ingin menghitung total jumlah ikan tertentu dalam daftar
tangkapannya. Buat penerapan dengan tambahDepan(), tambahBelakang() dan tampil()

*/

#include <iostream>

using namespace std;

struct Node {
    int jumlah;
    char nama[20];
    Node* next;
};

Node *awal_ptr = NULL;
Node *posisi;
int menu  = 0;

void tambah_depan() {
    Node *baru;
    baru = new Node;
    cout << "Masukkan Nama Ikan :";
    cin >> baru -> nama;
    cout << "Masukkan Jumlah Ikan :";
    cin >> baru -> jumlah;
    baru->next = NULL;
    if (awal_ptr == NULL) {
        awal_ptr=baru;
        awal_ptr->next=NULL;
    } else {
        baru->next= awal_ptr;
        awal_ptr = baru;
    }
}

void tambah_belakang () {
    Node *temp, *temp2;
    temp = new Node;
    cout << "Masukkan Nama Ikan :";
    cin >> temp->nama;
    cout << "Masukkan Jumlah Ikan :";
    cin >> temp->jumlah;
    temp->next = NULL;

    if (awal_ptr == NULL) {
        awal_ptr=temp;
        posisi=awal_ptr;
    } else {
        temp2=awal_ptr;
        while(temp2->next != NULL) {
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
}

void tampil () {
    Node *temp;
    temp = awal_ptr;
    cout << endl;
    if (temp==NULL)
        cout << "list Kosong!!!" << endl;
    else {
        while (temp!=NULL) {
            cout << "Nama Ikan :" << temp->nama << " ";
            cout << "Jumlah Ikan : " << temp->jumlah << " ";
            if (temp == posisi)
                cout << "<<<<<<< posisi node";
            cout << endl;
            temp = temp->next;
        }
        cout << "Akhir List" << endl;
    }
}

int main()
{
    cout << "Soal Nomor 3" << endl;
    awal_ptr=NULL;
    do {
        system("cls");
        tampil();
        cout << endl;
        cout << "============Menu Pilihan=============" << endl;
        cout << "1. Tampah Depan" << endl;
        cout << "2.Tambah Belakang" << endl;
        cout << "Silahkan Masukkan Pilihan Anda Yang Mulia : ";
        cin >> menu;
        switch(menu) {
        case 1:
        tambah_depan();
        break;
        case 2:
        tambah_belakang();
        break;
        }
    }
    while (menu != 0);
    return 0;
}
