#include <iostream>
using namespace std;

void foo(int* a) {
    cout << "foo: " << a << "\n";
    cout << "foo: " << *a << "\n";
    *a = 3;
}

void bar(int a) {
    cout << "bar: " << a << "\n";
    a = 5;
}

int main() {
    int* x = new int();
    *x = 4;
    foo(x);
    cout << "x po foo: " << *x << "\n";
    bar(*x);
    cout << "x po bar: " << *x << "\n";
    foo(x);
    cout << "x po foo: " << *x << "\n";
    delete(x);
}
