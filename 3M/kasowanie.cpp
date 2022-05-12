#include <iostream>
#include <stack>
#include <queue>
#include <time.h>
using namespace std;

void Popraw(string a){
    std::stack<char> stos;
    std::stack<char> pom;
    int dlugosc = a.length();
    for(int i=0; i<dlugosc; i++){
        if(a[i] == '#') {
            if(stos.size() > 0){
                stos.pop();
            }
            else{
                cout << "Blad w napisie";
                break;
            }
        }
        else{
            stos.push(a[i]);
        }
    }
    while(stos.size()>0){
        pom.push(stos.top());
        stos.pop();
    }
    while(pom.size()>0){
        cout << pom.top();
        pom.pop();
    }
    
}
 	
int main() {
    string napis = "kol#ejka##";
    Popraw(napis);
    return 0;
}