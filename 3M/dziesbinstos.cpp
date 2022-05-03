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

int main() {
    Zamien(33);
    return 0;
}