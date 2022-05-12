#include <iostream>
#include <stack>
using namespace std;

bool Sprawdz(string a){
    std::stack<char> stos;
    int dlugosc = a.length();
    for(int i=0; i<dlugosc; i++){
        if(int(a[i]) >= 97) {
            stos.push(a[i]);
        }
        if(int(a[i]) == int(stos.top()) - 32) {
            if(stos.empty()){
                return false;
            }
            else{
                stos.pop();
            }
        }
        else{

        }
    }
    if(stos.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    string napis;
    cout << "Podaj napis" << endl;
    cin >> napis;
    if(Sprawdz(napis)){
        cout << "tak";
    }
    else{
        cout << "nie";
    }
    return 0;
}