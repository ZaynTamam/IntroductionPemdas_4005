#include  <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan nilai c: ";
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