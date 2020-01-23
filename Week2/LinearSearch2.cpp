#include <iostream>
using namespace std;
int main(){
	
	int x, num;
	int ar[1100];
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>ar[i];
	}
	cin>>x;
	


	int counter=0;
	for(int i=0;i<num;i++){
	
		 if(ar[i]==x){
			cout<<"YES";
			return 0;
		}
	}
	
	cout<<"NO";
	
}
