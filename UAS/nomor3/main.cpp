/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216

Nomor 3

Luffy adalah seorang nelayan yang mencari ikan di laut. Dia memiliki daftar tangkapan ikan yang
didapat setiap harinya. Daftar tangkapan tersebut berupa Single Linked List yang berisi nama-nama \n jenis ikan dan jumlahnya yang berhasil ditangkap. Setiap nama jenis ikan dapat muncul
lebih dari satu kali dalam daftar. Luffy ingin menghitung total jumlah ikan tertentu dalam daftar
tangkapannya. Buat penerapan dengan tambahDepan(), tambahBelakang() dan tampil()

*/

#include <iostream>
using namespace std;

struct Node {
    string namaIkan;
    int jumlah;
    Node* next;
};

class DaftarTangkapan {
private:
    Node* head;

public:
    DaftarTangkapan() {
        head = nullptr;
    }

    void tambahDepan(const string& namaIkan, int jumlah) {
        Node* newNode = new Node;
        newNode->namaIkan = namaIkan;
        newNode->jumlah = jumlah;
        newNode->next = head;
        head = newNode;
    }

    void tambahBelakang(const string& namaIkan, int jumlah) {
        Node* newNode = new Node;
        newNode->namaIkan = namaIkan;
        newNode->jumlah = jumlah;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* curr = head;
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }

    void tampil() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << "Nama Ikan: " << curr->namaIkan << ", Jumlah: " << curr->jumlah << endl;
            curr = curr->next;
        }
    }

    int hitungJumlah(const string& namaIkan) {
        Node* curr = head;
        int jumlahTotal = 0;

        while (curr != nullptr) {
            if (curr->namaIkan == namaIkan) {
                jumlahTotal += curr->jumlah;
            }
            curr = curr->next;
        }

        return jumlahTotal;
    }
};

int main() {
    DaftarTangkapan daftar;

    int ukuran;
    cout << "Masukkan jumlah tangkapan ikan: ";
    cin >> ukuran;

    for (int i = 0; i < ukuran; i++) {
        string namaIkan;
        int jumlah;

        cout << "Tangkapan ikan ke-" << i + 1 << ":" << endl;
        cout << "Nama Ikan: ";
        cin >> namaIkan;
        cout << "Jumlah: ";
        cin >> jumlah;

        daftar.tambahBelakang(namaIkan, jumlah);
    }


    cout << "Daftar Tangkapan:" << endl;
    daftar.tampil();

    string namaIkan;
    cout << "Masukkan nama ikan yang ingin dihitung jumlahnya: ";
    cin >> namaIkan;

    int jumlahTotal = daftar.hitungJumlah(namaIkan);
    cout << "Total jumlah " << namaIkan << " dalam daftar tangkapan: " << jumlahTotal << endl;

    return 0;
}
