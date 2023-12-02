// LINKED LIST
// LINKED LIST
#include <iostream>

using namespace std;


struct Node {
    int data;   // data node
    Node *next; // menuju address lain
};

Node *head;

void init() {
    head = NULL;
}

// cek node kosong
int isKosong () {
    if(head == NULL) {
        return 1;
    }
}



void tmbh_dpn(int dataBaru) {
    Node *nodeBaru = new Node;

    nodeBaru-> data= dataBaru;
    nodeBaru -> next = NULL;

    if (isKosong() == 1) {
        head = nodeBaru;
        cout << "Masyuk awal : " << head->data << endl;
    } else {
        nodeBaru->next = head;
        head = nodeBaru;
        cout << "Masyuk : " << head->data << endl;
    }
}

void tampil (){
    Node *nodeBantu;
    nodeBantu = head;

    if(isKosong() != 1) {
        while(nodeBantu != NULL) {
            cout << nodeBantu -> data << " - ";
            nodeBantu = nodeBantu -> next;
        }
    } else {
        cout << "Nodenya kosong Senku" << endl;
    }
}

int main()
{
    init();
    tmbh_dpn(9);
    tmbh_dpn(90);
    tmbh_dpn(1);
    tampil();
    return 0;
}
