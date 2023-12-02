#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukan index array :";
    cin >> a;
    cout << endl;
    int hasil[a];
    for (int i =0; i < a; i++) {
        cout << "Masukkan aray idex ke - " << i << " = ";
        cin >> hasil[i];
    }
    for (int i = 0; i < a; i++) {
        cout << "[" << hasil[i] << "]";
    }

    int total = 0;
    for (int i =0; i < a; i++) {
        total+= hasil[i];
    }
    cout << "total seluruh jumlah index : " << total << endl;
    return 0;
}
