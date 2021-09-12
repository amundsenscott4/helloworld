#include <iostream>
using namespace std;

#define k 10

void wypisz(int* a, int start, int finish){
    for (int i=start; i<finish; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}
int* sortuj(int* a, int start, int finish){
    int kubek;
    for (int j=start; j<finish; j++) {
        for (int i=start; i<finish-1; i++) {
            if (a[i] > a[i+1]) {
                kubek=a[i];
                a[i]=a[i+1];
                a[i+1]=kubek;
            }
        }
    }
    return a;
}
int szukaj_liczby(int* a, int v, int start, int finish){
    int srodek;
    if (start > finish) {
        return -1;
        }
    if (start == finish) {
        if (a[start] == v) {
            return start;
        }
    }
    for ( ; start<finish ; ) {
        srodek = (start + finish)/2;
        if (a[srodek] == v) {
            return srodek;
        }
        if (a[srodek] > v) {
            finish = srodek - 1;
        }
        else {
            start = srodek + 1;
        }
    }
    return -1;
}


int main() {

    int test[4][k] = {
        {1, 2, 2, 3, 3, 6, 7, 9, 10, 14},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {0, 1, 2, 3, 4, 6, 7, 8, 10, 10},
        {1, 2, 3, 8, 10, 10, 14, 18, 20, 39},
    };
    //for (int i=0; i<4; i++) {
    //     sortuj(test[i], 0, k);
    //     cout << szukaj_liczby(test[i], 9, 5, 10);
    //}
    cout << "Indeks szukanej liczby: " << szukaj_liczby(test[3], 10, 0, 10);
}