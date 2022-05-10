#include <iostream>
#include <stack>
using namespace std;


bool Sprawdz(string onp)
{
	stack<int> stos;
 	for(int i=0;i<onp.size();i++)
 		if(onp[i]>='0' && onp[i]<='9'){
			stos.push(onp[i]-48);
		}
 		else{
			int arg2=stos.top(); stos.pop();
            int arg1=stos.top(); stos.pop();
            if(onp[i] == '+'){
				stos.push(arg1+arg2);
            }
			if(onp[i] == '-'){
				stos.push(arg1-arg2);
            }
			if(onp[i] == '*'){
				stos.push(arg1*arg2);
            }
			if(onp[i] == '/'){
				stos.push(arg1/arg2);
            }
		}
		if(stos.size() == 1){
            return true;
        }	
        else{
            return false;
        }
}
int main() {
    string napis = "123+*-";
    cout << Sprawdz(napis);
    return 0;
}