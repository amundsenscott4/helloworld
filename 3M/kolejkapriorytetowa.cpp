#include <iostream>
#include <stack>
#include <queue>
#include <time.h>
using namespace std;

#define N 10

auto porownaj0 = [](int left, int right) { return (left) < (right); };
auto porownaj1 = [](int left, int right) { return abs(left) > abs(right); };

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

int main() {
    int tab[N];
    Losuj(tab);
    Wypisz(tab);

    cout << endl << "pierwsza:" << endl;
    priority_queue<int> kolejka_priorytetowa;
    for(int i = 0;i < N; i++){
        kolejka_priorytetowa.push(tab[i]);
    }
    for(;kolejka_priorytetowa.size()>0;) {
        cout << kolejka_priorytetowa.top() << ", ";
        kolejka_priorytetowa.pop();
    }

    cout << endl << "druga:" << endl;
    priority_queue<int, vector<int>, decltype(porownaj1)> kolejka_priorytetowa_2(porownaj1);
    for(int i = 0;i < N; i++){
        kolejka_priorytetowa_2.push(tab[i]);
    }
    for(;kolejka_priorytetowa_2.size()>0;) {
        cout << kolejka_priorytetowa_2.top() << ", ";
        kolejka_priorytetowa_2.pop();
    }

    return 0;
}