#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int x,y;
	cin>>x>>y;
	int ar1[100100];
	int ar2[100100];
	for(int i=0;i<x;i++){
		cin>>ar1[i];
	}
	for(int i=0;i<y;i++){
		cin>>ar2[i];
	}
	
	for(int i=0;i<y;i++){
		int a = ar2[i];
		
		int l=0;
	int r=x-1;
	int mid;
	while(l<r){
		mid=(l+r)/2;
		if(ar1[mid]>a)
		r=mid;
		else 
		l=mid;
		if(r-l==1)
		break;
		
	}
	if((abs(ar1[l]-a)==0))
	cout<<a<<endl;
	else if(abs(ar1[r]-a)==0)
	cout<<a<<endl;
	
	else if(abs(ar1[l]-a)<=abs(ar1[r]-a))
	cout<<ar1[l]<<endl;
	else 
	 cout<<ar1[r]<<endl;
	 
	}
		
	
}

