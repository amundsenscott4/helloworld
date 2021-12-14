#include <iostream>
using namespace std;

#define N 10

void Losuj(int A[]){
    for(int i = 0; i < N; i++){
        A[i] = rand()%100;
    }
}

void Scalaj(int A[], int start, int finish, int middle){
    int B[N];
    int i = start;
    int j = middle + 1;
    int k=0;
    while(i <= middle && j <= finish){
        if(A[i]%2 < A[j]%2){
            B[k] = A[i];
            i++;
            k++;
        }
        if(A[i]%2 > A[j]%2){
            B[k] = A[j];
            j++;
            k++;
        }
        if(A[i]%2 == A[j]%2){
            B[k] = A[i];
            i++;
            k++;
        }
    }
    if(i <= middle){
        while(i <= middle){
            B[k] = A[i];
            i++;
            k++;
        }
    }
    else{
        while(j <= finish){
            B[k] = A[j];
            j++;
            k++;
        }
    }
    for(int m = 0; m < N; m++){
        cout << B[m] << ", ";
    }
}

void SortujOstatniaCyfra(int A[], int start, int finish){
    int middle = 0;
    if(start <= finish){
        middle = (start + finish)/2;
        SortujOstatniaCyfra(A, start, middle);
        SortujOstatniaCyfra(A, middle + 1, finish);
        Scalaj(A, start, middle, finish);
    }
}

int main() {
    int tab[N];
    Losuj(tab);
    cout << "Tablica: " << endl;
    for(int i = 0; i < N; i++){
        cout << tab[i] << ", ";
    }
    SortujOstatniaCyfra(tab, 0, N-1);
    cout << "Posortowana: " << endl;
    for(int j = 0; j < N; j++){
        cout << tab[j] <<", ";
    }
    return 0;
}