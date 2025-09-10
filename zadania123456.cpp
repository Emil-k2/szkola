#include <iostream>
using namespace std;

void zad1() {
    cout << "Zad 1" << endl;
    for (int i = 5; i <= 15; i++) {
        cout << i << " ";
    }
    cout << "\n\n";
}

void zad2() {
    cout << "Zad 2" << endl;
    for (int i = 20; i >= 10; i--) {
        cout << i << " ";
    }
    cout << "\n\n";
}

void zad3() {
    cout << "Zad 3" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << ". Emil" << endl;
    }
    cout << "\n";
}

void zad4() {
    cout << "Zad 4" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n";
}

void zad5() {
    cout << "Zad 5" << endl;
    int szerokosc, wysokosc;
    cout << "Podaj szerokosc prostokata: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc prostokata: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {
        for (int j = 0; j < szerokosc; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n";
}

void zad6() {
    cout << "Zad 6" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << (i * j) << "\t";
        }
        cout << endl;
    }
    cout << "\n";
}

int main() {
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
    zad6();

    return 0;
}
