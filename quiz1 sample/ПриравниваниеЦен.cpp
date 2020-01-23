#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int q,per;
	cin>>q;
	double sum;
	int res[1000];
	for(int i=0;i<q;i++){
		sum=0;
		int x;
		cin>>x;
		for(int j=0;j<x;j++){
			
			cin>>per;
			sum+=per;
		}
		res[i]=ceil(sum/x);
	}
	for(int i=0;i<q;i++){
		cout<<res[i]<<endl;
		
	}
}
