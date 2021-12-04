/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int silnia(int n) {
    if (n<0) return 0;
    if (n==0) return 1;
    int wynik = 1;
    for (int i=1; i<=n; i++) {
        wynik = wynik * i;
    }
    return wynik;
}

int silniar(int n) {
    if (n<=0) return 1;
    return n*silniar(n-1);
}

int main()
{
    cout<<"Hello silnia\n";
    cout<<silnia(5)<<"\n";
    cout<<silniar(5)<<"\n";
    return 0;
}
