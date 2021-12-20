#include <iostream>
using namespace std;

void Cyfry(int n){
    if(n < 10){
        cout << n << endl;
    }
    else{
        Cyfry(n/10);
        cout << n%10 << endl;
    }
}

int main() {
    int n = 0;
    cout << "Podaj liczbe: " << endl;
    cin >> n;
    Cyfry(n);
    return 0;
}