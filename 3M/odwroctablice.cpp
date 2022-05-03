#include <iostream>
#include <stack>
using namespace std;

#define N 10

void Wypisz(int A[]) {
    for(int i=0; i<N; i++){
        cout << A[i] << ", ";
    }
    cout << endl;
}
void Odwroc(int A[]){
    std::stack <int> stos;
    for(int i=0; i<N; i++){
        stos.push(A[i]);
    }
    for(int j=0; j<N; j++){
        A[j] = stos.top();
        stos.pop();
    }
}

int main() {
    int tab[N] = {1,2,3,4,5,6,7,8,9,10};
    Wypisz(tab);
    Odwroc(tab);
    Wypisz(tab);
    return 0;
}