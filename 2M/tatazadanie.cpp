#include <iostream>
using namespace std;

/*
 * Dodaje dwie liczby
 * i wypisuje na ekran
 */
int dodaj(int a, int b) {
    int c = a + b;
    cout << c;
    return c;
}

/*
 * Dodaje dwa wektory
 * i wypisuje na ekran
 */
void dodaj_wektory(int a[10], int b[10]) {
    
    for (int i=0; i<9; i++) {
        int suma=0;
        suma=a[i]+b[i];
        cout << suma << endl;
    }

    return;
}

int main() {

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    dodaj_wektory(a,b);

    return 0;

}