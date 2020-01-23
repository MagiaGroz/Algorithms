#include <iostream>
using namespace std;
int main(){
	string text;
	string p[200000];
	int n;
	cin>>text;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>p[i];	
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			
			
			if(text==(p[i]+p[j])){	
			cout<<"YES";
			return 0;
		}
		}
	}
	for(int i=n-1;i>=0;i--){
		for(int j=i-1;j>=0;j--){
			
			
			if(text==(p[i]+p[j])){	
			cout<<"YES";
			return 0;
		}
		}
	}
	cout<<"NO";
}
