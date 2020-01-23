#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int num,numj;
	cin>>num;
	
	int pil[101000];
	int jui[101000];
	
long long pref[101000];
	for(int i=0;i<num;i++){
		cin>>pil[i];
		pref[i]=pref[i-1]+pil[i];
		//cout<<pref[i]<<" ";
	}
		cin>>numj;
		
		for(int i=0;i<numj;i++){
			cin>>jui[i];
		}
		
	
		
	
	
	for(int i=0;i<numj;i++){
		int l=0;
		int r=num;
		int mid;
		while(l<=r){
			mid=(l+r)/2;
			if(l==r){
				if(jui[i]<=pref[r])
				cout<<mid+1<<endl;
				
				else
				cout<<mid+2<<endl;
				break;
			}
	//		else if(l==num && r==num)
	//		cout<<num<<endl;
			else if(jui[i]==pref[mid]){
				cout<<mid+1<<endl;
				break;
			}
			else if(jui[i]<pref[mid]){
				r=mid;
				if(jui[i]==16)
				cout<<jui[i]<<pref[mid]<<" ";
			}
			else if(jui[i]>pref[mid]){
				l=mid+1;
			}
				cout<<l<<" "<<r<<endl;
		}
	}
	
	return 0; 
}
