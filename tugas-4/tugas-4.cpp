#include <iostream>
#include <string>

using namespace std;

int main()
{
    int pilihan;
    cout << "Pilih soal nomor (2-6): ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 2:
    {
        char a;
        cout << "Masukkan angka yang ingin di increment : ";
        cin >> a;
        cout << "Hasil Increment : " << ++a << endl;
        break;
    }
    case 3:
    {
        char b;
        cout << "Masukkan angka yang ingin di parseint : ";
        cin >> b;
        int c = b - '0';
        cout << "Hasil Parseint : " << c << endl;
        break;
    }
    case 4:
    {
        int d;
        cout << "Masukkan angka yang ingin ditambahkan dengan 5 : ";
        cin >> d;
        d += 5;
        cout << "Hasil : " << d << endl;
        break;
    }
    case 5:
    {
        int e, f;
        cout << "Masukkan Angka Pertama : ";
        cin >> e;
        cout << "Masukkan Angka Kedua : ";
        cin >> f;

        cout << "\n=== Operator AND ===" << endl;
        cout << "(" << e << " < " << f << " && " << e << " > " << f << ") : " << (e < f && e > f) << endl;
        cout << "(" << e << " != " << f << " && " << e << " == " << f << ") : " << (e != f && e == f) << endl;
        cout << "(" << e << " <= " << f << " && " << e << " >= " << f << ") : " << (e <= f && e >= f) << endl;

        cout << "\n=== Operator OR ===" << endl;
        cout << "(" << e << " < " << f << " || " << e << " > " << f << ") : " << (e < f || e > f) << endl;
        cout << "(" << e << " != " << f << " || " << e << " == " << f << ") : " << (e != f || e == f) << endl;
        cout << "(" << e << " <= " << f << " || " << e << " >= " << f << ") : " << (e <= f || e >= f) << endl;

        cout << "\n=== Operator NOT ===" << endl;
        cout << "!(" << e << " < " << f << ") : " << !(e < f) << endl;
        cout << "!(" << e << " > " << f << ") : " << !(e > f) << endl;
        cout << "!(" << e << " == " << f << ") : " << !(e == f) << endl;
        cout << "!(" << e << " != " << f << ") : " << !(e != f) << endl;
        cout << "!(" << e << " <= " << f << ") : " << !(e <= f) << endl;
        cout << "!(" << e << " >= " << f << ") : " << !(e >= f) << endl;
        break;
    }
    case 6:
    {
        int g, h;
        cout << "Masukkan angka pertama : ";
        cin >> g;
        cout << "Masukkan angka kedua : ";
        cin >> h;
        int hasil = g + h;
        cout << "Hasil penjumlahan : " << hasil << endl;
        break;
    }
    default:
        cout << "Pilihan tidak valid. Silakan pilih nomor antara 2 hingga 6" << endl;
        break;
    }
    return 0;
}
