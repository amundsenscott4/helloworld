#include <iostream>
using namespace std;

#define max 8

class nowastrutura {
private:
    int keys[8];
    int values[8];
    int size=0;
};

int keys[8];
int values[8];
int size=0;

void initialize() {
    keys[0] = 2;
    values[0] = 5;
    size = 1;
}

void print() {
    for(int i=0; i<size; i++) {
        cout << keys[i] << ", " << values[i] << "\n";
    };
}

int increment(int k) {
    for (int i=0; i<size; i++) {
        if (keys[i] == k) {
            values[i]++;
            return values[i];
        }    
    };
    keys[size] = k;
    values[size] = 1;
    size++;
    return 1;
}

int check(int k) {
    for (int i=0; i<size; i++) {
        if (k==keys[i]) {
            return values[i];
        }
    }
    return 0;
}

int main() {
    initialize();
    increment(2);
    increment(3);
    increment(3);
    increment(3);
    increment(123);
    print();
    cout << check(2) << "\n";
    cout << check(3) << "\n";
    return 0;
}