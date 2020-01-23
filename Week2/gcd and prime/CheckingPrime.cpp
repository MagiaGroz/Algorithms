#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x;
	cin>>x;
	
	for(int i=2;i<sqrt(x)+1;i++){
		if(x%i==0&&i!=x){
			cout<<"composite";
			return 0;
		}
	}
	cout<<"prime";
}
