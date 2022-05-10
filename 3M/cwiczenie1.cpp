#include <iostream>
#include <time.h>
using namespace std;

// rozmiar tablicy
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
        A[i] = rand()%99;
    }
}

int Znajdz(int A[]){
    for(int i=0; i<N; i++){
        if(A[i]%2 == 0){
            return A[i];
        }
    }
    return -1;
}

int main() {
    int tab[N];
    Losuj(tab);
    Wypisz(tab);
    cout << Znajdz(tab);
	return 0;
}