#include <iostream>
using namespace std;

#define max 8

int keys[8];
int values[8];
int size=0;

void print() {
    for(int i=0; i<size; i++) {
        cout << keys[i] << ", " << values[i] << "\n";
    };
}

void put(int k, int v) {
    bool found = false;
    for (int i=0; i<size; i++) {
        if (k==keys[i]) {
            values[i]=v;
            found = true;
        };
    };
    if (!found && size<max) {
        keys[size] = k;
        values[size] = v;
        size++;
    };
}

int get(int k) {
    int v = 0;
    for (int i=0; i<size; i++) {
        if (k==keys[i]) {
            v=values[i];
        };
    };
    return v;
}

int main() {
    keys[0] = 1;
    values[0] = 4;
    size = 1;
    put(2, 5);
    put(11, 2);
    print();
    cout << get(3);
    return 0;
}