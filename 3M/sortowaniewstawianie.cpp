#include <iostream>
using namespace std;

void Wstawianie(int n, int A[])
{
     int pom = 0;
     int j = 0;
     for(int i=1; i<n; i++){     
         pom = A[i];
         j = i-1;     
         while(j>=0 && A[j]>pom) {
             A[j+1] = A[j]; 
             --j;
         }
         A[j+1] = pom;
     }     
}


int main() {
    cout << "Hello world" << endl;
    return 0;
}