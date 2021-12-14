#include <iostream>
#include <time.h>

using namespace std;

// zakładam, że n>0 (tablica niepusta)
int const N=10;

void Wypisz(int A[]) {
    int suma = 0;
    for(int i=0; i<N; i++){
        suma = suma + A[i];
        cout << A[i] << ", ";
    }
    cout << " (" << suma << ")" << endl;
}

void Wypisz(int A[], int start, int finish) {
    int suma = 0;
    for(int i=start; i<=finish; i++){
        suma = suma + A[i];
        cout << A[i] << ", ";
    }
    cout << " (" << suma << ")" << endl;
}

void Losuj(int A[]){
    srand(time(0));
    for(int i = 0; i < N; i++){
        A[i] = rand()%10;
    }
}

int Podziel(int A[], int start, int finish){
    if (start >= finish) { return finish; }
    int v = finish;
    int i = start;
    int j = finish-1;
    int k = 0;
    while(i <= j) {
        if( (A[i] < A[v]) && (A[j] >= A[v]) ){
            i++;
            j--;
        }
        if( (A[i] >= A[v]) && (A[j] < A[v]) ){
            k = A[i]; A[i] = A[j]; A[j] = k;
            i++;
            j--;
        }
        if( (A[i] < A[v]) && (A[j] < A[v]) ){
            i++;
        }
        if( (A[i] >= A[v]) && (A[j] >= A[v]) ){
            j--;
        }
    }
    k = A[i]; A[i] = A[v]; A[v] = k;
    return i;
}

void QuickSort(int A[], int start, int finish) {
    if (start >= finish) { return; }
    int p = Podziel(A, start, finish);
    QuickSort(A, start, p-1);
    QuickSort(A, p+1, finish);
}

int main(){
    int A[N]; //= {8, 1, 6, 4, 1, 2, 8, 5, 1, 5};
    Losuj(A);
    Wypisz(A);
    QuickSort(A, 0, N-1);
    // cout << Podziel(A, 0, 0) << endl;
    Wypisz(A);
    return 0;
}
