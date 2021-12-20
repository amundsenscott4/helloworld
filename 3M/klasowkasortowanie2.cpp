// Krzysztof Dabrowski 3M - Zadanie 2, sprawdzian 16.12.2021
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
    A[N-1] = rand()%10;
    for(int i = N-2; i >= 0; i--){
        A[i] = A[i+1]+1+rand()%10;
    }
}
//MergeSort bedzie tym razem malejacy
void Merge(int A[], int start, int mid, int finish) {
    int pomoc[finish-start+1];
	int i = start;
	int j = mid + 1;
 	int k = 0;

	while (i <= mid && j <= finish) {
		if (A[i] > A[j]) { pomoc[k] = A[i]; k++; i++; }
        else             { pomoc[k] = A[j]; k++; j++; }
	}
 
	while (i <= mid)     { pomoc[k] = A[i]; k++; i++; }
	while (j <= finish)  { pomoc[k] = A[j]; k++; j++; }
 
	for (k = start; k <= finish; k++) {
		A[k] = pomoc[k-start];
	}
}
 
void MergeSort(int A[], int start, int finish) {
	if (start >= finish) { return; }
    int mid = (start+finish)/2;
    MergeSort(A, start, mid);
    MergeSort(A, mid+1, finish);
    Merge(A, start, mid, finish);
}

void WstawLiczbe(int A[], int liczba){
    A[N-1] = liczba;
    MergeSort(A, 0, N-1);
}
 
int main() {
    int a = 0;
    int A[N];
    Losuj(A);
    cout << "Tablica: " << endl;
    Wypisz(A);
    cout << "Wprowadz liczbe mniejsza od najwiekszej i jednoczesnie wieksza od najmniejszej: " << endl;
    cin >> a;
    WstawLiczbe(A, a);
    cout << "Ponownie wypisana tablica:" << endl;
    Wypisz(A);
	return 0;
}