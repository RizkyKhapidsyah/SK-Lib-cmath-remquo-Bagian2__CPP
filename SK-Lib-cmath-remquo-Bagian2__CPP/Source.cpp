#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    int q;
    double a = 12.5, b = 2.2;
    double hasil = remquo(a, b, &q);

    cout << "Remainder of " << a << "/" << b << " is " << hasil << endl;
    cout << "Quotient of " << a << "/" << b << " is " << q << endl << endl;

    a = -12.5;
    hasil = remquo(a, b, &q);

    cout << "Remainder of " << a << "/" << b << " is " << hasil << endl;
    cout << "Quotient of " << a << "/" << b << " is " << q << endl << endl;

    b = 0;
    hasil = remquo(a, b, &q);

    cout << "Remainder of " << a << "/" << b << " is " << hasil << endl;
    cout << "Quotient of " << a << "/" << b << " is " << q << endl << endl;

    _getch();
    return 0;
}