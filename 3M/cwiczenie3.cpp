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
        A[i] = rand()%999999999;
    }
}
int SumaCyfr(int a){
    int suma = 0;
    while(a > 0){
        suma = suma + a%10;
        a = (a-a%10)/10;
    }
    return suma;
}
int Znajdz(int A[]){
    int max = 0;
    int liczba = 0;
    for(int i=0; i<N; i++){
        if(SumaCyfr(A[i]) >= max){
            max = SumaCyfr(A[i]);
            liczba = A[i];
        }
    }
    return liczba;
}

int main() {
    int tab[N];
    Losuj(tab);
    Wypisz(tab);
    cout << Znajdz(tab);
	return 0;
}