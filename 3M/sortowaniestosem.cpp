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
        A[i] = rand()%19 - 10;
    }
}

int ABS(int a){
    if(a >= 0){
        return a;
    }
    else{
        return -1*a;
    }
}

void PdoL(int x)
{   
    while((stosP.size() > 0) && (ABS(stosP.top()) <= ABS(x))){
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