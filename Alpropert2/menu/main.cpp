/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4216
*/
#include <iostream>
using namespace std;

void baris(int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << "=";
    }
}

void menu()
{
    cout << "1. Nasi goreng" << endl;
    cout << "2. Bakmie Jawa" << endl;
    cout << "3. Bakso" << endl;
    cout << "4. Mie Ayam" << endl;
    cout << "5. Mie Ayam Bakar" << endl;
    cout << "6. Ayam Geprek" << endl;
    cout << "7. Ayam Bakar" <<endl;
    cout << "8. Gurame Bakar " << endl;
}

int harga(int menu)
{
    if (menu == 1)
    {
        return 10000;
    }
    else if (menu == 2)
    {
        return 5000;
    }
     else if (menu == 3)
    {
        return 13000;
    }
     else if (menu == 4)
    {
        return 10000;
    }
     else if (menu == 5)
    {
        return 12000;
    }
     else if (menu == 6)
    {
        return 16000;
    }
     else if (menu == 7)
    {
        return 15000;
    }
     else if (menu == 8)
    {
        return 11000;
    }
}

int subtotal(int jumlah, int harga)
{
    return jumlah * harga;
}

int main()
{
    string lanjut;
    do
    {
        system ("cls");
        int choice, sum = 0;
        baris(30);
        cout << endl << "\t Daftar Menu  \n";
        baris(30);
        cout << endl;

        menu();
        cout << endl;

        cout << "Pilih menu: ";
        cin >> choice;
        int hrg = harga(choice);
        cout << "Harga: Rp " << hrg << endl;

        cout << "Jumlah: ";
        int jml;
        cin >> jml;
        int jum = subtotal(jml, hrg);
        cout << "Total harga: Rp " << jum << endl;

        cout << "Apakah ada pesanan lagi?(yes/no)";
        cin >> lanjut;
        system("cls");

    } while (lanjut == "yes");
    cout << "Pemesanan Selesai" << endl;
    return 0;
}
