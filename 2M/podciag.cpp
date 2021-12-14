#include <iostream>
using namespace std;

#define k 20

#define m 10

bool sprawdzanieR(int* c, int cstart, int cfinish, int* p, int pstart, int pfinish){
    // cout << cstart << "," << cfinish << "," << pstart << "," << pfinish;
    if (pstart > pfinish) {
        //cout << ",koniec p\n";
        return true;
    }
    if (cstart > cfinish) {
        // cout << ",koniec c\n";
        return false;
    }
    if (p[pstart] == c[cstart]) {
        // cout << ",znalazlem " << p[pstart] << "\n";
        return sprawdzanieR(c, cstart+1, cfinish, p, pstart+1, pfinish);
    }
    else {
        // cout << ",nie znalazlem " << p[pstart] << "\n";
        return sprawdzanieR(c, cstart+1, cfinish, p, pstart, pfinish);
    }
}

bool sprawdzanieI(int* c, int cstart, int cfinish, int* p, int pstart, int pfinish) {
    
}

int main() {

    int ciag[k] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int podciag[m] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int niepodciag[m] = {2, 4, 6, 8, 18, 20, 22, 24, 26, 28};

    cout << sprawdzanieR(ciag, 0, k-1, podciag, 0, m-1) << "\n";
    cout << sprawdzanieR(ciag, 0, k-1, niepodciag, 0, m-1) << "\n";
}