#include <iostream>
using namespace std;

int main(){
	int num;
	long long var=0;
	cin>>num;
	long long k=0;
	int l=0;
	int m=0;
	for(int i=0;i<num;i++){
	
		cin>>var;
		++l;
		k+=var*l + m;
	
		--m;
	}
	cout<<k;
	
	
}
