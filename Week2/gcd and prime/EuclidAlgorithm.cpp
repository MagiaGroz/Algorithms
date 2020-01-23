#include <iostream>
using namespace std;

int algo(int a, int b){
	if(a%b==0)
	return b;

a = b*(a/b) +a%b;
return algo(b,a%b);	
}

int main(){
int a,b;
cin>>a>>b;
if(b>a){
	int x;
	x=a;
	a=b;
	b=x;
}	
cout<<algo(a,b);


}

