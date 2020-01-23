#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,m,n;
	cin>>a>>b>>c>>d;
	if(b==d){
		m =  a+c;
		cout<<m + " " + b;
		return 0;
	}
	 
		m = a*d+b*c;
	n = b*d;
	cout<<m + " " + n;
	return 0;
}
