#include <iostream>

using namespace std;

int main()
{
    int i = 120;
    int *p = &i;
    //cout << p;
    cout << "Isi variabel i : " << i << endl;
    cout << "Pointer / alamat memory i : " << &i << endl;
    cout << "Pointer / alamat memory p : " << &p << endl;
    cout << "Hasil dari p karena p memanggil address i : " << p << endl;
    cout << "Hasil daari *p (isi dari variabel  i karena *p mengambil isi dari address / alamat memory i) : " << *p << endl;

    /*char a[6] = {10, 20, 20, 40, 50, 60};
    char *p = a;
    cout << p+1;
*/
    return 0;
}
