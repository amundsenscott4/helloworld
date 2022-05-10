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
        A[i] = rand()%90 + 10;
    }
}
void Zamien(int A[]){
    for(int i=0; i<N; i++){
        int jedn = A[i]%10;
        int dzies = (A[i] - A[i]%10)/10;
        A[i] = 10*jedn + dzies;
    }
}

int main() {
    int tab[N];
    Losuj(tab);
    Wypisz(tab);
    Zamien(tab);
    Wypisz(tab);
	return 0;
}