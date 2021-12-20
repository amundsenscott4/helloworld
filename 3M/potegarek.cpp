#include <iostream>
using namespace std;

int Podnies(int n,int potega)
{
if (potega == 0){
    return 1;
}
else{
    return n = n*Podnies(n,potega-1);
}
}

int main() {
    int n = 2;
    int potega = 5;
    cout << "Podaj liczbe: " << endl;
    cout << "Podniesione do potegi: " << endl;
    cout << Podnies(n, potega);
    return 0;
}