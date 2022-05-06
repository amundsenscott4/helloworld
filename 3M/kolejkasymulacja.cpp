#include <iostream>
#include <stack>
#include <queue>
using namespace std;

#define N 10

int MaxKlientow(int A[]){
    std::queue<int> kolejka;
    int max = 0;
    int i = 0;
    while(i < N-1){
        if(A[i] == 1){
            kolejka.push(A[i]);
            i++;
            if(kolejka.size() > max){
                max = kolejka.size();
            }
        }
        if(A[i] == -1){
            kolejka.pop();
            i++;
        }
        if(A[i] == 0){
            i++;
        }
    }
    return max;
}

int main() {
    int tab[N] = {1, 1,-1, 1, 1, -1, 1, 1, 1, 0};
    cout << MaxKlientow(tab);
    return 0;
}