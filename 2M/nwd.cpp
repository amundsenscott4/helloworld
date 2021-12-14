#include <iostream>
using namespace std;

int NWD(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    if(a == b){
        return a;
    }
    if(a > b){
        return NWD(a - b,b);
    }
    if(a < b){
        return NWD(a, b - a);
    }
}

int main() {
    int a = 20;
    int b = 15;
    cout << NWD(a, b);
    return 0;
}