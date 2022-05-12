#include <iostream>
#include <stack>
#include <queue>
#include <time.h>
using namespace std;

#define N 10

stack<int> stosP;
stack<int> stosL;

void Wypisz(int A[]) {
    for(int i=0; i<N; i++){
        cout << A[i] << ", ";
    }
    cout << endl;
}

void Losuj(int A[]){
    srand(time(0));
    for(int i = 0; i < N; i++){
        A[i] = rand()%89 + 10;
    }
}

int Dzies(int a){
    int liczba = (a-a%10)/10;
    return liczba;
}

void PdoL(int x)
{   
    while((stosP.size() > 0) && (Dzies(stosP.top()) <= Dzies(x))){
        stosL.push(stosP.top());
        stosP.pop();
    }
}
void LdoP()
{
 	while(stosL.size() > 0){
         stosP.push(stosL.top());
         stosL.pop();
    }
}
void Insert(int x){
    PdoL(x);
    stosP.push(x);
    LdoP();
}

void WypiszStos(){
    while(stosP.size() > 0){
        cout << stosP.top() <<", ";
        stosP.pop();
    }
}

int main() {
    int tab[N];
    Losuj(tab);
    Wypisz(tab);
    for(int i = 0;i < N; i++){
        Insert(tab[i]);
    }
    WypiszStos();
    return 0;
}