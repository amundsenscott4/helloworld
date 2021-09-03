#include <iostream>
using namespace std;

#define max 8

class nowastruktura {
    private:
        int pamiec;
    public:
        void zapamietaj(int i) {
            pamiec = i;
        }
        void hello() {
            cout << "Pamietam: " << pamiec << "\n";
        }
};

class multilicznik {
    private:
        int keys[8];
        int values[8];
        int size;
    public:
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
};

int main() {

    nowastruktura a;
    nowastruktura b;
    a.zapamietaj(123);
    a.hello();
    b.zapamietaj(234);
    b.hello();
    a.hello();

    multilicznik c;
    multilicznik d;

    c.initialize();
    c.increment(97);

    d.initialize();
    d.increment(97);
    d.increment(97);

    c.print();
    d.print();



    return 0;
}