#include <iostream>
using namespace std;

 void circle(int a[], int x){
 	bool done = false;
	for(int i=0;i<x;i++){
		
		
		a[i]-=x;
		if(a[i]<=-1){
			cout<<i+1;
			done =true;
			break;
		}
	
		
	}
	if(done!=true)
	circle(a,x);
}
int main(){
	int x;
	cin>>x;
	int a[100000];
	int el;
	
	for(int i=0;i<x;i++){
		cin>>el;
		a[i]=el;
	}
	int c=0;
	int s=1;
	for(int i=0;i<x;i++){
		
		c++;
		a[i]-=c;
		if(a[i]<=-1){
			cout<<i+1;
			break;
		}
		if(i+1>=x){
			
		circle(a,x);
		break;
		}
		
	}
	
	
}
