#include <iostream>
using namespace std;

int main(){

    //string concatenation

    string namaDepan = "herdo ";
    string namaTengah = "Dimas ";
    string namaBelakang = "pratirto ";
    string namaLengkap = namaDepan + namaTengah + namaBelakang;

    cout << namaLengkap << endl;


    //string append
    string namaLengkap2 = namaDepan + namaTengah.append(namaBelakang);
    cout << namaLengkap2 << endl;


    //string length
    // use length() or size()

    cout << namaLengkap2.length() << endl;
    cout << namaLengkap2.size() << endl;

    //access string. use index
    cout << namaLengkap[1];


    return 0;
}