#include <iostream>
#include <time.h>
using namespace std;

#define N 10

void Losuj(int A[]){
    A[0] = rand()%10;
    for(int i = 1; i < N; i++){
        A[i] = A[i-1] + rand()%10;
    }
}
void Wypisz(int A[]) {
    for(int i=0; i<N; i++){
        cout << A[i] << ", ";
    }
    cout << endl;
}
int SzukajBinarnie(int A[], int start, int finish, int liczba){
    if (start > finish){
        return -1;
    }
    int middle = (start + finish)/2;
    if (liczba == A[middle]){
        return middle;
    }
    if (liczba < A[middle]){
        return SzukajBinarnie(A, start, middle-1, liczba);
    }
    else{
        return SzukajBinarnie(A, middle+1, finish, liczba);
    }
}

int main(){   
    int tab[N];
    Losuj(tab);
    cout << "Tablica: ";
    Wypisz(tab);
    int n = 0;
    cout << "Wczytaj liczbe, ktorej szukasz: ";
    cin >> n;
    cout << "Liczba wystepuje na pozycji: " << SzukajBinarnie(tab, 0, N-1, n);
}
