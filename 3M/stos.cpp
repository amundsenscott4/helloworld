#include <iostream>
#include <stack>
using namespace std;



int main() {
    cout << "Hello world" << endl;
    std::stack<int> stos;
    stos.push(1);
    stos.push(2);
    stos.push(17);
    cout << stos.top() << endl;
    stos.pop();
    cout << stos.top() << endl;
    return 0;
}