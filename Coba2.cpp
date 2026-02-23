#include  <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Masukkan nilai ulangan a: ";
    cin >> a;
    cout << "Masukkan nilai ulangan b: ";
    cin >> b;
    cout << "Masukkan nilai ulangan c: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "Nilai terbesar ulangan adalah: " << a << endl;
    } else if (b > a && b > c) {
        cout << "Nilai terbesar ulangan adalah: " << b << endl;
    } else {
        cout << "Nilai terbesar ulangan adalah: " << c << endl;
    }

    return 0;
} 