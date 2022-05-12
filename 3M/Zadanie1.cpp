#include <iostream>
#include <stack>
using namespace std;

bool Sprawdz(string a){
    std::stack<char> stos;
    int dlugosc = a.length();
    for(int i=0; i<dlugosc; i++){
        if(a[i] == 'a') {
            stos.push(a[i]);
        }
        if(a[i] == 'b') {
            if(stos.empty()){
                return false;
                break;
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
    cout << "Podaj napis zlozony z liter a i b" << endl;
    cin >> napis;
    if(Sprawdz(napis)){
        cout << "tak";
    }
    else{
        cout << "nie";
    }
    return 0;
}