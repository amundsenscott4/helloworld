#include <iostream>
using namespace std;

#define k 10

void wypisz(int* a, int start, int finish){
    for (int i=start; i<finish; i++){
        // cout << "adres: " << a+i << " ";
        // cout << "wartosc: " << *(a+i) << "\n";
        cout << a[i] << " ";
    }
    cout << "\n";
}

int* filtruj(int*a, int start, int finish){
    int kubek;
    for (int i=start; i<finish-1; i++) {
            if (a[i] > a[i+1]) {
                kubek=a[i];
                a[i]=a[i+1];
                a[i+1]=kubek;
            }
        }
    return a;
}

int* sortuj_babelkowo(int* a, int start, int finish){
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

int szukaj_max(int* a, int start, int finish){
    int max=a[start];
    int indeks=start;
    for (int i=start; i<finish; i++){
        if (a[i]>max){
            max=a[i];
            indeks =i;
        }
    };
    return indeks;
}

int* sortuj_inaczej(int* a, int start, int finish){
    // inny sposób sortowania
    if (start>=finish){
        return a;
    }
    // start<finish
    return filtruj(
        sortuj_inaczej(a, start+1, finish),
        start,
        finish
    );
    
}

int main() {

    int test[8][k] = {
        {10, 2, 8, 3, 3, 14, 4, 7, 5, 9},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {5, 1, 2, 3, 4, 6, 7, 8, 9, 10},
        {10, 2, 8, 3, 3, 14, 4, 7, 5, 9},
        {10, 2, 8, 3, 3, 14, 4, 7, 5, 9},
        {10, 2, 8, 3, 3, 14, 4, 7, 5, 9},
        {10, 2, 8, 3, 3, 14, 4, 7, 5, 9},
        {10, 2, 8, 3, 3, 14, 4, 7, 5, 9}
    };

    // for (int i=0; i<8; i++) {
    //     cout << i << "\n";
    //     wypisz(test[i], 0, k);
    //     wypisz(sortuj_inaczej(test[i], 0, k), 0, k);
    // }
    for (int i=0; i<8; i++){
        cout << szukaj_max(test[i], 0, k) << "\n";

    }

}
