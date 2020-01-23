#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int x, num;
	int ar[1100];
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>ar[i];
	}
	cin>>x;
	
	sort(ar,ar+num);

	int counter=0;
	for(int i=0;i<num;i++){
	
		 if(ar[i]==x){
			counter++;
		}
	}
	
	cout<<counter;
	
}
