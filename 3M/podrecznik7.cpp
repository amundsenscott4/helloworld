#include <iostream>
#include <time.h>
using namespace std;

// zakładam, że n>0 (tablica niepusta)
#define N 10

void Wypisz(int A[]) {
    int suma = 0;
    for(int i=0; i<N; i++){
        suma = suma + A[i];
        cout << A[i] << ", ";
    }
    cout << " (" << suma << ")" << endl;
}

void Losuj(int A[]){
    srand(time(0));
    for(int i = 0; i < N; i++){
        A[i] = rand()%100;
    }
}

int SumaCyfrDec(int i) {
    int wynik = 0;
    while (i > 0) {
        wynik = wynik + i%10;
        i = (i-i%10)/10;
    }
    return wynik;
}

void Merge(int A[], int start, int mid, int finish) {
    // [start .. mid] [mid+1 .. finish]
    int pomoc[finish-start+1];
	int i = start;
	int j = mid + 1;
 	int k = 0;

	while (i <= mid && j <= finish) {
		if (SumaCyfrDec(A[i]) < SumaCyfrDec(A[j])) { pomoc[k] = A[i]; k++; i++; }
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
 
int main() {
    int A[N];
    Losuj(A);
    Wypisz(A);
    MergeSort(A, 0, N-1);
    Wypisz(A);
	return 0;
}