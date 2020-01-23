#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x;
	cin>>x;
	 double lim = pow(( double )(x),( double )1/3);
	for(int i=0;i<=lim+1; i++){
	
		for(int j=0;j<=lim; j++){
			if((i*i*i+j*j*j)==x){
			
			cout<<i<<" "<<j;
			return 0;
		}
		}
	}
	
	cout<<"impossible";
}
