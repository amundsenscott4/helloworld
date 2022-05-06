#include <iostream>
#include <stack>
using namespace std;

void WypiszCyfry(int a){
    std::stack<int> stos;
    while(a > 0){
        stos.push(a%10);
        a = (a-a%10)/10;
    }
    while(stos.size()>0){
        cout << stos.top() << endl;
        stos.pop();
    }
    
}

int main() {
    WypiszCyfry(1234);
    return 0;
}