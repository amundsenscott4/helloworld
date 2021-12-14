#include <iostream>
using namespace std;

#define max 128

class multilicznik {
public:
    int keys[max];
    int values[max];
    int size;
    void initialize() {
        size = 0;
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
        if (size < max) {
            keys[size] = k;
            values[size] = 1;
            size++;
            return 1;
        }
        else {
            return 0;
        }
    }
    int check(int k) {
        for (int i=0; i<size; i++) {
            if (k==keys[i]) {
                return values[i];
            }
        }
        return 0;
    }
    int operator+(int k) {
        return increment(k);
    }
};

int main() {

    multilicznik c, d;

    cout << "C:\n";
    c.initialize();
    c.increment(97);
    c.operator+(97);
    c + 96;
    c.print();

    cout << "D:\n";
    d.initialize();
    d.increment(97);
    d.increment(97);
    d.increment(98);
    d.increment(99);
    d.print();

    return 0;

}