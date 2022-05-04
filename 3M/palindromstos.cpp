#include <iostream>
#include <stack>
using namespace std;

bool SprawdzPalindrom(string napis){
    std::stack<char> stos;
    int a = napis.length();
    for(int i = 0; i < a; i++){
        stos.push(napis[i]);
    }
    for(int j = 0; j < a; j++){
        //cout << stos.top() << " " << napis[j] << " ";
        if(stos.top() != napis[j]){
            //cout << "zle" << endl;
            return false;
        }
        else{
            //cout << "dobrze" << endl;
        }
        stos.pop();
    }
    return true;
}

int main() {
    string napis = "palindrom";
    cout << SprawdzPalindrom(napis);
    return 0;
}