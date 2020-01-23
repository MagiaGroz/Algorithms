#include <iostream>
using namespace std;
	int x,y;
		int a[1000][1000];
int main(){

	cin>>x;
	cin>>y;

	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>a[i][j];
			
		}
	}
	int sum =0;
	for(int i=0;i<x;i++){
		for(int j=y-2;j>0;j--){
			
			if((a[i][j-1]!=0) && (a[i][j]>a[i][j+1]||a[i][j+1]-a[i][j-1]==1)){
				cout<<"-1";
				return 0;
			}
			
			else if(a[i][j]==0){
				a[i][j]=a[i][j+1]-1;
			}
			sum +=a[i][j];
			
		}
		sum+=a[i][y-1]+a[i][0];
	}
	
	cout<<sum;
	return 0;
}
