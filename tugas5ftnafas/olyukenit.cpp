#include <iostream>
using namespace std;

int main() {
    bool lapar = true;
    bool uang = false;
    bool promo = false;

    if (lapar) {
        if (uang || promo) {
        cout << "makan dulu ah...";
        }
    }
    else if (promo) {
        cout << "nggak laper, minum ae lah";
    } else {
        cout << "numpang ac doang ini mah";
    }
    
}