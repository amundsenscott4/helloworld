#include <iostream>
using namespace std;

int ZnajdzNajwieksza(int n){
    int max = 0;
    int cyfra = 0;
    if (n <= 0){
        return 0;
    }
    while (n > 0){
        cyfra = n % 10;
        if (cyfra > max){
            max = cyfra;
            n = (n - cyfra) / 10;
        }
        else{
            n = (n - cyfra) / 10;
        }
    }
    return max;
}

int main(){
    int n = 0;
    cout << "Podaj liczbe" << endl;
    cin >> n;
    cout << ZnajdzNajwieksza(n);
    return 0;
}