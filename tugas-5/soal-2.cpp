#include <iostream>
using namespace std;

int main() {
    string penjumlahan = "1+5";
    int operan_1 = penjumlahan[0] - '0';
    int operan_2 = penjumlahan[2] - '0';

    if (penjumlahan[1] == '+') {
        int hasil = operan_1 + operan_2;
        cout << hasil;
    } else if (penjumlahan[1] == '-') {
        int hasil = operan_1 - operan_2;
        cout << hasil;
    } else if (penjumlahan[1] == '*') {
        int hasil = operan_1 * operan_2;
        cout << hasil;
    } else if (penjumlahan[1] == '/') {
        int hasil = operan_1 / operan_2;
        cout << hasil; 
    } else {
        cout << "invalid";
    }
    
    return 0;
}
