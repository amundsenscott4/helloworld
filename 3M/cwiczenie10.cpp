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
        A[i] = rand()%999;
    }
}
int DectoBin(int a) {
    int i=0,tab[31];

	while(a) //dopóki liczba będzie różna od zera
	{
		tab[i++]=a%2;
		a/=2;
	}

	for(int j=i-1;j>=0;j--)
		cout<<tab[j];
    return 0;
}
int SumaCyfr(int a){
    int suma = 0;
    while(a > 0){
        suma = suma + a%10;
        a = (a-a%10)/10;
    }
    return suma;
}

void SortujBin(int A[]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(SumaCyfr(DectoBin(A[j])) > SumaCyfr(DectoBin(A[j+1]))){
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
    SortujBin(tab);
	return 0;
}