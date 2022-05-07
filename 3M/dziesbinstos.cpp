#include <iostream>
#include <stack>
using namespace std;

void Zamien(int a){
    std::stack<int> stos;
    int b = 0;
    while(a>0){
        b = a%2;
        stos.push(b);
        a = (a-b)/2;
    }
    while(stos.size() > 0){
        cout << stos.top();
        stos.pop();
    }
}
void ZamienRozne(int a, int nowy){
    std::stack<int> stos;
    int b = 0;
    while(a>0){
        b = a%nowy;
        stos.push(b);
        a = (a-b)/nowy;
    }
    while(stos.size() > 0){
        cout << stos.top();
        stos.pop();
    }
}

int main() {
    ZamienRozne(33, 2);
    return 0;
}