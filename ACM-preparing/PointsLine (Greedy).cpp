#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,d;
	cin>>n>>d;
int vec[200] ;

for(int i=0;i<n;i++){
	cin>>vec[i];
}	

sort(vec, vec+n);
if(vec[0]==vec[n-1]){

cout<<0;
return 0;
}
for(int i=0;i<n;i++){
	if(vec[n-1-i]-vec[0]<=d){
		cout<<i;
		break;
	}
}
	
}
