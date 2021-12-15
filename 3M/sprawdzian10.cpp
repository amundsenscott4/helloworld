#include <iostream>
using namespace std;


string Sortuj(string napis, int n){
    char pom = 0;
    for(int j = 0; j < n; j++) {
         for(int i = 0; i < n-1; i++){
            if(toupper(napis[i]) > toupper(napis[i+1])){
                 pom = napis[i+1];
                 napis[i+1] = napis[i];
                 napis[i] = pom;
             }
        }
    }
    return napis;
}

int main() {
    string napis;
    cout << "Napis: " << endl;
    cin >> napis;
    cout << "Dlugosc: " << endl;
    int n = napis.length();
    cout << n << endl;
    //cout << "Hello world" << endl;
    cout << Sortuj(napis, n);
    return 0;
}