#include <iostream>
using namespace std;
int main(){
	int num,hour;
	cin>>num>>hour;
	int a[num];
	long long l=0;
	for(int i=0;i<num;i++){
		cin>>a[i];
		l+=a[i];
	}

	int min=a[0];
int	max=a[0];
	for(int i=0;i<num;i++){
		if(min>a[i]){
			min=a[i];
		}
		if(max<a[i])
		max=a[i];
	}
	
	int res=0;
	for(int j=1;j<=max;j++){
		res=0;
		for(int i=0;i<num;i++){
			if(a[i]/j==0){
				res+=1;
			}
			else if(a[i]%j>0)
				res+=a[i]/j+1;
			else if(a[i]%j==0)
			res+=a[i]/j;
		}
		
		if(res<=hour){
			cout<<j;
			break;
		}
	}
	return 0;
}
