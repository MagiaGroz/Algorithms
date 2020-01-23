#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int h,y,z;
	cin>>h>>y>>z;

	if(z==1){
	cout<<(h)/(y-z);
	return 0;
	}
	cout<<abs((h-z)/(y-z));
}
