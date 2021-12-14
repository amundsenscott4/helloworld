#include <iostream>
using namespace std;

int ilosc_wystapien(int* a, int start, int finish, int liczba){
    int wyst=0;
    for (int i=start; i<finish; i++){
        if (a[i]==liczba){
            wyst=wyst+1;
        }
    };
    return wyst;
}

int main() {

int tab[8][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {8, 6, 1, 3, 9, 10, 11, 8, 9, 10},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {10, 2, 8, 3, 1, 1, 4, 7, 5, 9},
        {1, 2, 8, 1, 3, 1, 4, 7, 5, 9},
        {10, 2, 8, 3, 3, 14, 4, 7, 5, 9},
        {10, 2, 8, 3, 3, 14, 4, 7, 5, 9}
    };

for (int i=0; i<8; i++){
        cout << ilosc_wystapien(tab[i], 0, 10, 1) << "\n";
    }
}