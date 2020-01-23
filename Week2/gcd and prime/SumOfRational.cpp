#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	int d;
	int m;
	int n;
	
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;

		m = a*d+b*c;
	n = b*d;
	 for(int i=2;i<m+n;i++){
	 	if(m%i==0 && n%i==0){
		 
	 	m=m/i;
	 	n=n/i;
		 i=2;
		 }
	 }
	

	cout<<m <<" "<< n;
	
}
