/*
Nama :Sahrul Amri
NIM : A11.2022.14613
Kelompok :  4216
*/


#include <iostream>
#include <string>

using namespace std;

// Struct untuk merepresentasikan produk
struct Product {
    string name;
    int quantity;
    double price;
    Product* next;
};

// Class LinkedList untuk mengelola daftar produk
class LinkedList {
private:
    Product* head;
public:
    LinkedList() {
        head = NULL;
    }
    void addProduct(string name, int quantity, double price) {
        Product* newProduct = new Product;
        newProduct->name = name;
        newProduct->quantity = quantity;
        newProduct->price = price;
        newProduct->next = NULL;

        if (head == NULL) {
            head = newProduct;
        } else {
            Product* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newProduct;
        }
    }
    Product* findProduct(string name, Product* current = NULL) {
        if (current == NULL) {
            current = head;
        }

        if (current == NULL) {
            return NULL;
        } else if (current->name == name) {
            return current;
        } else {
            return findProduct(name, current->next);
        }
    }
    void displayProducts(Product* current = NULL) {
        if (current == NULL) {
            current = head;
        }

        while (current != NULL) {
            cout << "Nama: " << current->name << endl;
            cout << "Jumlah: " << current->quantity << endl;
            cout << "Harga: " << current->price << endl << endl;
            current = current->next;
        }
    }
};

int main() {
    LinkedList productList;

    int choice;
    string name;
    int quantity;
    double price;
    string pilih;

    do {
        cout << "=== Supermarket ===" << endl;
        cout << "1. Tambah Produk" << endl;
        cout << "2. Cari Produk" << endl;
        cout << "3. Tampilkan Daftar Produk" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih: ";
        cin >> choice;
        cin.ignore(); // Membersihkan newline character

        switch (choice) {
            case 1:
                cout << "Masukkan Nama Produk: ";
                getline(cin, name);
                cout << "Masukkan Jumlah Produk: ";
                cin >> quantity;
                cout << "Masukkan Harga Produk: ";
                cin >> price;
                productList.addProduct(name, quantity, price);
                cout << "Produk berhasil ditambahkan." << endl;
                break;
            case 2:
                cout << "Masukkan Nama Produk yang Dicari: ";
                getline(cin, name);
                if (Product* product = productList.findProduct(name)) {
                    cout << "Nama: " << product->name << endl;
                    cout << "Jumlah: " << product->quantity << endl;
                    cout << "Harga: " << product->price << endl;
                } else {
                    cout << "Produk tidak ditemukan." << endl;
                }
                break;
            case 3:
                productList.displayProducts();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }

        if (choice != 0) {
            cout << "Ingin memilih lagi? (y/n): ";
            cin >> pilih;
            cin.ignore(); // Membersihkan newline character
            cout << endl;
        }
    } while (pilih == "y" || pilih == "Y");

    return 0;
}
