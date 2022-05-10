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
int SumaCyfr(int a){
    int suma = 0;
    while(a > 0){
        suma = suma + a%10;
        a = (a-a%10)/10;
    }
    return suma;
}
void SortujSuma(int A[]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(SumaCyfr(A[j]) > SumaCyfr(A[j+1])){
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
    SortujSuma(tab);
    Wypisz(tab);
	return 0;
}