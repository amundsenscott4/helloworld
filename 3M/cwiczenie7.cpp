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
void SortujCyfra(int A[]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(A[j]%10 > A[j+1]%10){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main() {
    int tab[N];
    Losuj(tab);
    Wypisz(tab);
    SortujCyfra(tab);
    Wypisz(tab);
	return 0;
}