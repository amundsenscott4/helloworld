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
        A[i] = rand()%10;
    }
}

void Merge(int A[], int start, int mid, int finish) {
    int pomoc[finish-start+1];
	int i = start;
	int j = mid + 1;
 	int k = 0;

	while (i <= mid && j <= finish) {
		if (A[i] < A[j]) { pomoc[k] = A[i]; k++; i++; }
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
    cout << "Tablica: " << endl;
    Wypisz(A);
    MergeSort(A, 0, N-1);
    Wypisz(A);
    cout << "Dwie najmniejsze liczby: " << A[0] << ", " << A[1] << endl;
    cout << "Najwieksza liczba: " << A[N-1] << endl;
	return 0;
}