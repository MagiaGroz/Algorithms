#include<iostream>
using namespace std;

int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}


//для n чисел
int nod (int a, int b)  
{  
    if (b == 0) {
       if (a == 0)
           return -1; 
       else return a;}
    else abs(nod(b, a % b));
} 
 
int main()
{
    int n=0,n1=0;
    int ax[]={100,200,400};
    for(int i=0;i<3 & (n!=1);i++)
    {
        n1=n;
        n=nod(n1,ax[i]);
    }
    cout<<n<<endl;
}