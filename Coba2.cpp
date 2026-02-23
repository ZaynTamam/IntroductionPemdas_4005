#include  <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Masukkan nilai ulangan 1: ";
    cin >> a;
    cout << "Masukkan nilai ulangan 2: ";
    cin >> b;
    cout << "Masukkan nilai ulangan 3: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "Nilai terbesar adalah: " << a << endl;
    } else if (b > a && b > c) {
        cout << "Nilai terbesar adalah: " << b << endl;
    } else {
        cout << "Nilai terbesar adalah: " << c << endl;
    }

    return 0;
} 