#include <iostream>

using namespace std;

int main(){
	int num;
	int ser=0;
	int dima=0;
	int ar[1100];
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>ar[i];
	}
int b=0, c=0;
	for(int i=0;i<num;i++){
		
			if(i%2==0){
		
	if(ar[b]>ar[num-1-c]){		
	ser+=ar[b];
	b++;}
	
	else
		 {
	ser+=ar[num-1-c];
	c++	;}
	
	
	
	}
		if(i%2==1){
		
	if(ar[b]>ar[num-1-c]){		
	dima+=ar[b];
	b++;}
	
	else
		 {
	dima+=ar[num-1-c];
	c++	;}
	
	
	
	}
	}
	cout<<ser<<" "<<dima;
	
}
