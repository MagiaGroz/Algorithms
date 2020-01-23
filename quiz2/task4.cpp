#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	
	cin>>n>>m;
	int a[n];
	int b[m];
	int res[n+m];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int k=0;
	bool c[n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[j]==b[i]){
				res[k]=a[j];
				c[j]=true;
				k++;
			}
		}
		
	}
	int last[n-(k-m)];
	int r=0;
	for(int i=0;i<n;i++){
		if(c[i]==false){
			last[r]=a[i];
			r++;
		}
	}
	
	sort(last,last +r);
	for(int i=0;i<k;i++){
		cout<<res[i]<<" ";
	}
	for(int i=0;i<r;i++){
		cout<<last[i]<<" ";
	}
	
	
	
	
}
