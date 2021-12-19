#include <iostream>
using namespace std;

bool czy_rowne(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }
    for (int i=0; i<=(a.length()-1); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void wypisz(string s) {
    cout << "|";
    for (int i=0; i<=(s.length()-1); i++) {
        cout << s[i] << "|";
    }
    cout << endl;
}

void wypisz_odwrotnie(string s) {
    cout << "|";
    for (int i=0; i<=(s.length()-1); i++) {
        cout << s[(s.length()-1) - i] << "|";
    }
    cout << endl;
}

string odwroc(string s) {
    string r = s;
    for (int i=0; i<=(s.length()-1); i++) {
        r[i] = s[(s.length()-1) - i];
    }
    return r;
}

int main() {
    string a = "alamakota";
    string b = "alabama";
    cout << czy_rowne(a, b) << endl;
    cout << "a:" << endl;
    wypisz(a);
    wypisz_odwrotnie(a);
    cout << "b:" << endl;
    wypisz(b);
    wypisz(odwroc(b));
    return 0;
}
