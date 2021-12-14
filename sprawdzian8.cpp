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
void ScalajC(int A[], int B[], int C[]){
    for(int i = 0; i < 10; i++){
        C[i] = A[i];
    }
    for(int j = 10; j < 20; j++){
        C[j] = B[j-10];
    }
}
void BubbleSort(int A[]){
    int k = 0;
    for(int j = 0; j < 2*N; j++){
        for(int i = 0; i < (2*N)-1; i++){
            if(A[i] > A[i+1]){
                k = A[i];
                A[i] = A[i+1];
                A[i+1] = k;
            }
        }
    }
}


int main(){   
    int A[N];
    int B[N];
    int C[2*N];
    Losuj(A);
    cout << "Tablica 1: ";
    Wypisz(A);
    Losuj(B);
    cout << "Tablica 2: ";
    Wypisz(B);
    ScalajC(A, B, C);
    BubbleSort(C);
    cout << "Tablica scalona: ";
    for(int i = 0; i < N; i++){
        cout << C[i] << ", ";
    }
}
