#include <iostream>
using namespace std;

int main() {
    string aritmatika = "1+2";
    int angka = aritmatika[0] - '0';
    int angka1 = aritmatika[2] - '0';

    if (aritmatika[1] == '+') {
        int hasil = angka + angka1;
        cout << hasil;
    } else if (aritmatika[1] == '-') {
        int hasil = angka - angka1;
        cout << hasil;
    } else {
        cout << "invalid";
    }
}