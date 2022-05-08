#include <iostream>
#include <fstream>
#include <stack>
#include <iomanip>

using namespace std;

const int N=20;

struct pole 
{
	int w,k;
};

void WczytajLabirynt(int lab[][N])
{
	string s;
	ifstream we("labirynt.txt");
    for (int i=0;i<N;i++)
    {
    	we>>s;
    	for (int j=0;j<N;j++) 
           	if (s[j]=='X') lab[i][j]=-1; else lab[i][j]=0;
	}
    we.close();
}

bool ZnajdzDroge(int lab[][N], pole p1, pole &p2)
{
	int w,k,x;
    bool wyjscie=false;
    stack<pole> Stos;
	Stos.push(p1);
    lab[p1.w][p1.k]=1;
    while (!wyjscie && !Stos.empty())
    {
		p2=Stos.top(); Stos.pop(); w=p2.w; k=p2.k;
		if (w==0 || w==N-1 || k==0 || k==N-1) wyjscie=true;
        else 
		{
            x=lab[w][k]+1;
            if (lab[w-1][k]==0) 
			{
				lab[w-1][k]=x; 
				p2.w=w-1; p2.k=k; Stos.push(p2);
			}
			if (lab[w+1][k]==0) 
			{
				lab[w+1][k]=x; 
				p2.w=w+1; p2.k=k; Stos.push(p2);
			}
			if (lab[w][k-1]==0) 
			{
				lab[w][k-1]=x; 
				p2.w=w; p2.k=k-1; Stos.push(p2);
			}
			if (lab[w][k+1]==0) 
			{
				lab[w][k+1]=x; 
				p2.w=w; p2.k=k+1; Stos.push(p2);
			}
        }      
    } 
	return wyjscie;       
}

void OznaczDroge(int lab[][N], pole p)
{
	int w,k,x;
	w=p.w; k=p.k;
	x=lab[w][k]; lab[w][k]=-2;
	while (x>1)
	{
		if (w>0 && lab[w-1][k]==x-1)
		{
			lab[w-1][k]=-2; w--;
		}
		else if (w<N-1 && lab[w+1][k]==x-1)
		{
			lab[w+1][k]=-2; w++;
		}
		else if (k>0 && lab[w][k-1]==x-1)
		{
			lab[w][k-1]=-2; k--;
		}
		else 
		{
			lab[w][k+1]=-2; k++;
		}
		x--;
	}	
}

void WypiszLabirynt(int lab[][N])
{
	cout<<"   ";
	for (int j=0;j<N;j++) cout<<setw(3)<<j;
	cout<<endl;
	for (int i=0;i<N;i++)
    {
		cout<<setw(3)<<i;
		for (int j=0;j<N;j++) 
		    if (lab[i][j]==-1) cout<<"  X";
			else if (lab[i][j]==-2) cout<<"  D";
				 else cout<<"   ";
        cout<<endl;
    }
}

int main()
{ 
    int lab[N][N];
    pole p1,p2;
    WczytajLabirynt(lab);
    WypiszLabirynt(lab);
    cout<<"Wspolrzedne pola startowego: "<<endl;
	cout<<"w= "; cin>>p1.w;
	cout<<"k= "; cin>>p1.k;
	if (ZnajdzDroge(lab,p1,p2))
    {
    	OznaczDroge(lab,p2);
    	WypiszLabirynt(lab);
	}	 
	else cout<<"Brak wyjscia";
    return 0;     
}
