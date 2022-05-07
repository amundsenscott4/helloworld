#include <iostream>
#include <stack>
using namespace std;

bool Sprawdz(string a){
    std::stack<char> stos;
    int dlugosc = a.length();
    for(int i=0; i<dlugosc; i++){
        if(a[i] == '(') {
            stos.push(a[i]);
        }
        if(a[i] == ')') {
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
    string nawiasy = ")(";
    cout << Sprawdz(nawiasy);
    return 0;
}