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

int inc(int k) {
    for (int i=0; i<size; i++) {
        if (keys[i] == k) {
        values[i]++;
        }
    };
    return values[k];
}

int check(int k) {
    int v=0; 
    for (int i=0; i<size; i++) {
        if (k==keys[i]) {
            v=values[i];
        }
        else {
            v=0;
        }
    }
    return v;
}

int main() {
    keys[0] = 2;
    values[0] = 5;
    size = 1;
    inc(2);
    print();
    cout << check(2) << "\n";
    cout << check(3) << "\n";
    return 0;
}