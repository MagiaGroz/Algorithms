#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x;
	int a[x];
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cin>>y;
	int b[y];
	for(int i=0;i<y;i++){
		cin>>b[i];
	}
	
	bool g;
if(x>=y){
	
	for(int i=0;i<x;i++){
		g=false;
		for(int j=0;j<y;j++){
			if(a[i]==b[j]){
				g=true;	
				break;
			}
		}
		if(g==false){
			cout<<"NO";
			return 0;
		}
	}
}
else{
	for(int i=0;i<y;i++){
		g=false;
		for(int j=0;j<x;j++){
			if(b[i]==a[j]){
				g=true;	
				break;
			}
		}
		if(g==false){
			cout<<"NO";
			return 0;
		}
	}
}
	
		cout<<"YES";
	
}
