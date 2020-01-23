#include <iostream>
using namespace std;
int main(){
/*	int x;
	cin>>x;
	int count=0;
	if(x==2){
		cout<<"1";
		return 0;
	}
	while(x!=0){
		x/=2;
		count++;
	}
	cout<<count;*/
int x;
cin>>x;
int m,n;
m=1;
n=0;
while(m<x){
	m=m*2;
	n++;
}
cout<<n;
}
