#include <iostream>
#include <chrono>

using namespace std;

void dec2binOdPrawej(int n) {
    if (n<0) return;
    int ostatniacyfra = n % 2;
    int nowaliczba = (n - ostatniacyfra) / 2;
    cout << ostatniacyfra;
    if (nowaliczba>0) dec2binOdPrawej(nowaliczba);
}

void dec2binOdLewej(int n) {
    if (n<0) return;
    int ostatniacyfra = n % 2;
    int nowaliczba = (n - ostatniacyfra) / 2;
    if (nowaliczba>0) dec2binOdLewej(nowaliczba);
    cout << ostatniacyfra;
}

int main() {
    cout << "dec2bin " << "\n";
    dec2binOdPrawej(10);
    cout << "\n";
    dec2binOdLewej(10);
    cout << "\n";
    return 0;
}
