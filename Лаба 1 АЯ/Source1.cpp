#include <iostream>
using namespace std;

int main() {

    int a, b, c, r;
    cout << "a=";
    cin >> a;
    cout << endl;
    cout << "b=";
    cin >> b;
    cout << endl;
    r = a % 2;
    if (r == 0) {
        c = a * b;
    }
    if (r == 1) {

        c = a + b;

    }

    cout << "ñ=" << c << endl;


    return 0;



}