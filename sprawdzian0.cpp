#include <iostream>
#include <time.h>

using namespace std;

// zakładam, że n>0 (tablica niepusta)
int const N=10;

void Wypisz(int A[]) {
    for(int i=0; i<N; i++){
        cout << A[i] << ", ";
    }
    cout << endl;
}

void Wypisz(int A[], int start, int finish) {
    for(int i=start; i<=finish; i++){
        cout << A[i] << ", ";
    }
    cout << endl;
}

void Losuj(int A[]){
    srand(time(0));
    for(int i = 0; i < N; i++){
        A[i] = rand()%10;
    }
}

// Zakladam, ze liczba istnieje w tej tablicy
// i wtedy kazda z czesci jest niepusta
int Podziel(int A[], int start, int finish, int liczba){
    int i = start;
    int j = finish;
    int kubek = 0;
    while(i <= j) {
        if( (A[i] < liczba) && (A[j] >= liczba) ){
            i++;
            j--;
        }
        if( (A[i] >= liczba) && (A[j] < liczba) ){
            kubek = A[i];
            A[i] = A[j];
            A[j] = kubek;
            i++;
            j--;
        }
        if( (A[i] < liczba) && (A[j] < liczba) ){
            i++;
        }
        if( (A[i] >= liczba) && (A[j] >= liczba) ){
            j--;
        }
    }
    return i;
}

void QuickSort(int A[], int s, int f) {
    Wypisz(A, s, f);
    if (s >= f) { return; }
    // l musze wziac z tablic, np. A[s], A[f], A[(s+f)/2], itp.
    int l = A[s];
    int p = Podziel(A, s, f, l);
    QuickSort(A, s, p-1);
    QuickSort(A, p, f);
}

int main(){
    int A[N] = {8, 8, 6, 4, 1, 2, 8, 5, 1, 7};
    // Losuj(A);
    Wypisz(A, 0, 1);
    QuickSort(A, 0, 9);
    Wypisz(A, 0, 9);
    return 0;
}
