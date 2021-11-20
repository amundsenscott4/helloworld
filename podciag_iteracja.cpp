#include <iostream>
using namespace std;

#define k 20

#define m 10

bool sprawdzanieI(int* c, int cstart, int cfinish, int* p, int pstart, int pfinish) {
    bool koniec = false;
    bool znalazlem = false;
    for ( ; !koniec; ) {
        // cout << "S: " << cstart << " " << cfinish << " " << pstart << " " << pfinish << "\n";
        if (pstart > pfinish) {
            znalazlem = true;
            koniec = true; 
        }
        else
        if (cstart > cfinish) {
            znalazlem = false;
            koniec = true;
        } else
        if (p[pstart] == c[cstart]) {
            znalazlem = true;
            cstart++;
            pstart++;
            koniec = false;
        }
        else {
            znalazlem = false;
            cstart++;
            koniec = false;
        }
    }
    return znalazlem;
}

int main() {

    int ciag[k] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int podciag[m] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int niepodciag[m] = {2, 4, 6, 8, 18, 20, 22, 24, 26, 28};

    cout << sprawdzanieI(ciag, 0, k-1, podciag, 0, m-1) << "\n";
    cout << sprawdzanieI(ciag, 0, k-1, niepodciag, 0, m-1) << "\n";
}