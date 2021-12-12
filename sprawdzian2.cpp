#include <iostream>
#include <time.h>
using namespace std;

#define N 10

void Wypisz(int A[]) {
    for(int i=0; i<N; i++){
        cout << A[i] << ", ";
    }
    cout << endl;
}

void Losuj(int A[]){
    srand(time(0));
    for(int i = 0; i < N; i++){
        A[i] = rand()%100;
    }
}

int SumaCyfrDec(int i) {
    int wynik = 0;
    while (i > 0) {
        wynik = wynik + i%10;
        i = (i-i%10)/10;
    }
    return wynik;
}

int SumaCyfrBin(int i) {
    int wynik = 0;
    while (i > 0) {
        wynik = wynik + i%2;
        i = (i-i%2)/2;
    }
    return wynik;
}

bool WarunekNaSumeCyfrDec(int X, int Y) {
    return SumaCyfrDec(X) > SumaCyfrDec(Y);
}

bool WarunekNaSumeCyfrDec2(int X, int Y) {
    if (SumaCyfrDec(X) == SumaCyfrDec(Y)) {
        return X>Y;
    } 
    else {
        return SumaCyfrDec(X) > SumaCyfrDec(Y); 
    }
}

void BubbleSort(int A[]){
    int k = 0;
    for (int j = 0; j < N-1; j++) {
        for (int i = 0; i < N-1; i++) {
            if (
                // A[i] > A[i+1] // zwykle sortowanie
                // A[i]%10 > A[i+1]%10 // ostatnia cyfra dziesietnie
                // A[i]%2 > A[i+1]%2 // parzystosc czyli ostatnia cyfra binarnie
                // SumaCyfrDec(A[i]) > SumaCyfrDec(A[i+1]) // suma cyfr dziesietnie
                // WarunekNaSumeCyfrDec(A[i], A[i+1]) // suma cyfr dziesietnie inaczej
                // WarunekNaSumeCyfrDec2(A[i], A[i+1]) // suma cyfr dziesietnie inaczej + rowne
                SumaCyfrBin(A[i]) > SumaCyfrBin(A[i+1]) // suma cyfr binarnie
            ) {
                k = A[i]; A[i] = A[i+1]; A[i+1] = k;
            }
        }
    }
}

int main(){   
    int tab[N];
    Losuj(tab);
    cout << "Tablica    : "; 
    Wypisz(tab);
    cout << "Posortowana: ";
    BubbleSort(tab);
    Wypisz(tab);
}
