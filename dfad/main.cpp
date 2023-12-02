#include <iostream>

using namespace std;

string nama(string nama, int umur) {
    return nama + " " + to_string(umur);

}

int main()
{
    cout << nama("Amri", 20);

    string nama = "amri";
    cout << nama;
    return 0;
}
