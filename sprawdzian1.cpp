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
    for(int i = 0; i < N; i++){
        A[i] = rand()%10;
    }
}

void PodzielNaParzystosc(int A[]){
    int i = 0;
    int j = N - 1;
    int kubek = 0;
    while(i <= j){
        if(A[i]%2==1 && A[j]%2==0){
            kubek = A[i];
            A[i] = A[j];
            A[j] = kubek;
            i++;
            j--;
        }
        if(A[i]%2==0 && A[j]%2==1){
            i++;
            j--;
        }
        if(A[i]%2==0 && A[j]%2==0){
            i++;
        }
        if(A[i]%2==1 && A[j]%2==1){
            j--;
        }
    }
}

int PodzielNaParzystoscZLiczba(int A[]){
    int i = 0;
    int j = N - 1;
    int kubek = 0;
    while(i <= j){
        if(A[i]%2==1 && A[j]%2==0){
            kubek = A[i];
            A[i] = A[j];
            A[j] = kubek;
            i++;
            j--;
        }
        if(A[i]%2==0 && A[j]%2==1){
            i++;
            j--;
        }
        if(A[i]%2==0 && A[j]%2==0){
            i++;
        }
        if(A[i]%2==1 && A[j]%2==1){
            j--;
        }
    }
    return i;
}

int main(){
    int tab[N];
    Losuj(tab);
    cout << "Tablica   : ";
    Wypisz(tab);
    cout << endl << "Podzielona: ";
    PodzielNaParzystosc(tab);
    Wypisz(tab);
    return 0;
}
