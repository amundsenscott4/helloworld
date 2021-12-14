#include <iostream>
using namespace std;

int ZnajdzNajwieksza(int n){
    int max = 0;
    if (n<=0){
        return 0;
    }
    else{
        while(n>0){
            if(n%10 > 0){
                max = n%10;
                n = n-n%10/10;
            }
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    ZnajdzNajwieksza(n);
}