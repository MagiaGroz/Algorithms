#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	
	int a[100100];
	int b[100100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<k;i++){
		cin>>b[i];
	}
	
	for(int i=0;i<k;i++){
		int j = b[i];
		
		int l=0;
		int r=n-1;
		int mid;
		while(l<=r){
			mid = (l+r)/2;
	
			if(a[mid]==j){
				
				break;
			}
			else if(a[mid]<j){
				l=mid+1;
			}
			else 
			r=mid;
			
			if(l==r)
			break;
			}
			if(a[(l+r)/2]==j)
			cout<<"YES"<<endl;
			else 
			cout<<"NO"<<endl;
		}
	}
	


