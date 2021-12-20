#include <iostream>
using namespace std;



int main() {
    string napis;
    cout << "Podaj Twojego stringa: " << endl;
    cin >> napis;
    bool karpatka = true;
    int lewa = 0;
    int prawa = napis.length()-1;
    while(lewa <= prawa && karpatka){
        if(napis[lewa] == napis[prawa]){
            prawa--;
            lewa++;
        }
        else{
            karpatka = false;
        }
    }
    if(karpatka){
        cout << "MORDO DZIALA" << endl;
    }
    else{
        cout <<"NIE MA CHUJA KRZYSZTOF" << endl;
    }
    return 0;
}