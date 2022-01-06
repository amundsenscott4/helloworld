#include <iostream>
#include <time.h>
using namespace std;

#define N 8
#define M 6

int A[N+1]; // poziomo, uzywamy i
int B[M+1]; // pionowo, uzywamy j
int C[M+1][N+1]; // najpierw numer wiersza, potem numer kolumny
int D[M+N]; // z zapasem, wystarczylby min(M,N)

void Wypisz(int table[], int start, int finish) {
    for(int i=start; i<=finish; i++){
        cout << char(table[i]) << " ";
    }
}

void WypiszA() {
    Wypisz(A,0,N);
}

void WypiszB(){
    Wypisz(B,0,M);
}

void WypiszC() {
    cout << "    ";
    for (int i=0; i<=N; i++) {
        cout << char(A[i]) << " ";
    }
    cout << endl;
    cout << "    ";
    for (int i=0; i<=N; i++) {
        cout << i << " ";
    };
    cout << endl;
    for (int j=0; j<=M; j++) {
        cout << char(B[j]) << " " << j << " ";
        for (int i=0; i<=N; i++) {
            cout << C[j][i] << " ";
        }
        cout << endl;
    }
}

void LosujAB(){
    srand(time(0));
    for(int i = 0; i <= N+1; i++){
        A[i] = 97 + rand()%26;
    }
    for(int j = 0; j <= M+1; j++){
        B[j] = 97 + rand()%26;
    }
    // chce miec spacje w elemencie 0
    A[0] = 32;
    B[0] = 32;
}

void LosujABC(){
    srand(time(0));
    for(int i = 0; i <= N+1; i++){
        A[i] = 97 + (rand() % 26);
    }
    for(int j = 0; j <= M+1; j++){
        B[j] = 97 + (rand() % 26);
    }
    for(int j = 0; j <= M+1; j++){
        for(int i = 0; i <= N+1; i++){
            if (i == 0) { C[j][i] = 0; } else
            if (j == 0) { C[j][i] = 0; } else {
                C[j][i] = rand() % 10;
            };
        }
    }
    // chce miec spacje w elemencie 0
    A[0] = 32;
    B[0] = 32;
    // C[0][0] = 0;
}


int NWP(){
    C[0][0] = 0;
    for (int j=1; j<=M; j++) {
        for (int i=1; i<=N; i++) {
            if (A[i] == B[j]) {
                C[j][i] = C[j-1][i-1] + 1;
            } else {
                C[j][i] = max(C[j-1][i], C[j][i-1]);
            }
        }
    }
    return C[M][N];
}

void NWP_wypisz() {
    // pracuje na tablicy C
    // zakladamy, ze zostala wyliczona
    // odtwarzamy cofam sie z C[M][N] do C[0][0]
    // znalezione kolejne elmenety odklada do D[k] ... D[1]s
    int i = N;
    int j = M;
    int k = 0;
    while(i>0 && j>0){
        if(C[j][i] == C[j-1][i]){
            j--;
        }
        if(C[j][i] == C[j][i-1]){
            i--;
        }
        else{
            D[k] = A[i];
            k++;
            i--;
            j--;
        }
    }
}

int main(){
    LosujABC();
    // WypiszA(); cout << endl;
    // WypiszB(); cout << endl;
    // WypiszC(); cout << endl;
    int k = NWP();
    WypiszC(); cout << endl;
    cout << k << endl;
    NWP_wypisz();
    Wypisz(D, 0, k-1);
    return 0;
}
