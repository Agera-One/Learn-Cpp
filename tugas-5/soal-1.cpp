#include <iostream>
using namespace std;

int main() {
    bool lapar = true;
    bool uang = false;
    bool promo = false;

    if (lapar) {
        if (uang || promo) {
            cout << "kamu boleh makan";
        } else if (!uang && !promo) {
            cout << "kamu kasihan sekali, lapar tapi tidak punya uang dan promo";
        }
    } else if (promo) {
        cout << "kamu cuman minum saja";
    } else {
        cout << "kamu cuman boleh nemenin aja";
    }

    return 0;
}