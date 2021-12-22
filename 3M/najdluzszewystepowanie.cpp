#include <iostream>
#include <time.h>
using namespace std;

// zakładam, że n>0 (tablica niepusta)
#define N 10

void Wypisz(int A[]) {
    for(int i=0; i<N; i++){
        cout << A[i] << ", ";
    }
}

void Losuj(int A[]){
    srand(time(0));
    A[0] = rand()%10;
    for(int i = 1; i < N; i++){
        A[i] = A[i-1]+rand()%10;
    }
}

int ZnajdzNajdluzszy(int A[]){
    int lakt = A[0];
    int dlugakt = 1;
    int lnaj = A[0];
    int dlugnaj = 1;
    for(int i = 1; i < N; i++){
        if(A[i] == lakt){
            dlugakt++;
            if(i == N-1){
                dlugnaj = dlugakt;
            }
        }
        else{
            if(dlugakt > dlugnaj){
                dlugnaj = dlugakt;
                dlugakt = 1;
                lnaj = lakt;
                lakt = A[i];
            }
            else{
                dlugakt = 1;
                lnaj = lakt;
                lakt = A[i];
            }
        }
    }
    return dlugnaj;
}

int main(){
    int tab[N] = {1, 2, 5, 7, 6, 4, 4, 4, 9, 8};
    int tab2[N] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int tab3[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //Losuj(tab);
    Wypisz(tab);
    cout << endl << ZnajdzNajdluzszy(tab);
}
