#include <iostream>
using namespace std;

string OdwrocmySlowoBoCzemuNie(string napis) {
    int dlugosc = napis.length();
    string odwrocony = "";
    for (int i=0; i<dlugosc; i++){
        odwrocony[i] = napis[dlugosc-i-1];
        cout << odwrocony[i] << endl;
    }
    cout << odwrocony << endl;
    return odwrocony;
}

bool SprawdzmyCzyTakieSameLitery(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }
    for (int i=0; i<a.length(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
int main(){
    string napis1 = "alab";
    string napis2 = "alab";
    // cout << "Podaj Twojego stringa 1: " << endl;
    // cin >> napis1;
    // cout << "Podaj Twojego stringa 2: " << endl;
    // cin >> napis2;
    // cout << OdwrocmySlowoBoCzemuNie(napis, odwrocony);
    // cout << endl << "Czy po genialnym odwroceniu, litery sa takie same?: ";
    cout << SprawdzmyCzyTakieSameLitery(napis1, napis2);
    cout << "Odwrocone:" << endl;
    cout << OdwrocmySlowoBoCzemuNie(napis1);
    return 0;
}