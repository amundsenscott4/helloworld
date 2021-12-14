#include <iostream>
using namespace std;

bool CzyPoprawnyZapis(int n, int podstawa){
    int cyfra = 0;
    while (n > 0){
        cyfra = n % 10;
        if (cyfra > podstawa){
            return false;
        }
        else{
            n = (n - cyfra) / 10;
        }
    }
}

int main(){
    int n = 0;
    cout << "Podaj liczbe: " << endl;
    cin >> n;
    int podstawa = 4;
    cout << "Czy liczba jest poprawna w tym systemie?" << endl;
    CzyPoprawnyZapis(n, podstawa);
    return 0;
}