#include <iostream>
#include <stack>

using namespace std;

string ONP(string w)
{
	stack<char> stos;
	stos.push('#');
 	string onp="";
 	for(int i=0;i<w.size();i++)
    	switch (w[i])
      	{
			case '(':
            	stos.push('('); break;
       		case ')':
            	while (stos.top()!='(')
              	{
					onp=onp+stos.top(); stos.pop();
				}	 
            	stos.pop(); break;
       		case '+':
            	while (stos.top()!='#' && stos.top()!='(')
              	{
					onp=onp+stos.top(); stos.pop();
				}
            	stos.push('+'); break;
       		case '-':
            	while (stos.top()!='#' && stos.top()!='(')
             	{
					onp=onp+stos.top(); stos.pop();
				}
            	stos.push('-'); break;     
       		case '*':
            	if (stos.top()=='*' || stos.top()=='/')
              	{
					onp=onp+stos.top(); stos.pop();
				}
            	stos.push('*'); break;
        	case '/':
            	if (stos.top()=='*' || stos.top()=='/')
              	{
					onp=onp+stos.top(); stos.pop();
				}
            	stos.push('/'); break;     
       		default:
            	onp=onp+w[i];
   		}
 	while (stos.top()!='#')
   	{
		onp=onp+stos.top(); stos.pop();
	}
	stos.pop();
	return onp;
}
 
int main()
{
	string s;
	cout<<"Podaj wyrazenie: "; cin>>s;
 	cout<<"ONP: "<<ONP(s);                                     
 	return 0;            
}