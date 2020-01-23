#include <iostream>
#include <Math.h>
#include <iomanip>
using namespace std;
int main(){
	int num;
	double el[1100];
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>el[i];
	}
	

	double x,y;
	for(int i=0;i<num;i++){
		if((el[i]*el[i] - 4*el[i])==0){	
		x=el[i]/2;
		y=el[i]-x;
				cout<<"Y "<<fixed<<setprecision(9)<<y<<" "<<x<<endl;
		}
		else if((el[i]*el[i] - 4*el[i])<0){
			cout<<"N"<<endl;
		}
		else {
			x=-(-el[i]+sqrt(el[i]*el[i]-4*el[i]))/2;
			y=el[i]-x;
			cout<<"Y "<<fixed<<setprecision(9)<<y<<" "<<x<<endl;
		}		
		
	}
	
}
