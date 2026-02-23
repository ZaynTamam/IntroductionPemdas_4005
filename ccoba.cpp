#include <iostream>

using namespace std;

int main()
//langkah 1: deklarasi variabel
{ int panjang, lebar, luas;    //langkah 2: input nilai panjang
    cout << "Masukkan panjang: ";
    cin >> panjang;

    //langkah 3: input nilai lebar
    cout << "Masukkan lebar: ";
    cin >> lebar;

    //langkah 4: proses perhitungan luas
    luas = panjang * lebar;

//langkah 5: output hasil perhitungan luas
    cout << "hasilnya adalah: " << luas << endl;
}