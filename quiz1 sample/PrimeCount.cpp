#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int i){
	
}
int main(){
	int x;
	cin>>x;
	int cnt=1;
	for(int i=3;i<x;i+=2){
		for(int j=2;j<sqrt(i);j++){
			if(i%j==0){
			
				break;
			}
			if(x%i==0){
				cout<<i;
				cnt++;
							
			}
		}
	
	}
	
	cout<<cnt;
}
