#include <iostream>
using namespace std;

void CzySumaRowna(int a, int b){
    int asuma = 0;
    int bsuma = 0;
    while(a > 0){
        asuma = asuma + a%10;
        a = (a - a%10)/10;
    }
    while(b > 0){
        bsuma = bsuma + b%10;
        b = (b - b%10)/10;
    }
    if(asuma == bsuma){
        cout << "TAK" << endl;
    }
    else{
        cout << "NIE" << endl;
    }
}

int main(){
    int a;
    int b;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    CzySumaRowna(a, b);
}