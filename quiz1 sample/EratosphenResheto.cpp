#include <iostream>
using namespace std;
	int n;
	bool was[1000010];
int main(){

	cin>>n;
	was[1]=true;
	
	for(int i=2;i*i<=n;i++){
			if(!was[i]){
			
		for(int j = i+i;j<=n;j+=i){
		
				was[j]=true;
			
		}
	}
	
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if((!was[i]&&!was[j])&&i+j==n){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}
}
