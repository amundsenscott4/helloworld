#include <iostream>
using namespace std;

#define k 10

int test[k] = {10, 2, 8, 3, 3, 14, 4, 7, 5, 9};

void wypisz(int a[k]){
    for (int i=0; i<k; i++){
        cout << a[i] << " ";
    }
}

int* sortuj_babelkowo(int a[k]){
    int kubek;
    for (int j=0; j<k; j++) {
        for (int i=0; i<k-1; i++) {
            if (a[i] > a[i+1]) {
                kubek=a[i];
                a[i]=a[i+1];
                a[i+1]=kubek;
            }
        }
    }
    return a;
}

int main() {
    
    // cout << k;
    wypisz(sortuj_babelkowo(test));
}