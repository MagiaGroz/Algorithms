#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int matrix[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>matrix[i][j];
		}
	}
int k;
cin>>k;

	for(int i=0;i<n-1;i++){
		if(matrix[i][0]==k){
			cout<<"true";
			return 0;
		}
		
		if(matrix[i+1][0]>k && matrix[i][0]<k){
			for(int j=0;j<m;j++){
				if(matrix[i][j]==k){
					cout<<"true";
					return 0;
				}
			}
		}
		if(i==n-2){
		
			if(matrix[i+1][0]<=k){
			for(int j=0;j<m;j++){
				if(matrix[i+1][j]==k){
					cout<<"true";
					return 0;
				}
			}
		}
		}
		
	}	
	cout<<"false";
	
}
