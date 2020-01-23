#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int num,numj;
	cin>>num;
	
	int price[101000];
	int coins[101000];
	

	for(int i=0;i<num;i++){
		cin>>price[i];
		
	}
		cin>>numj;
		
		for(int i=0;i<numj;i++){
			cin>>coins[i];
		}
		
	
		
	sort(price,price+num);
	
	for(int i=0;i<numj;i++){
		int l=0;
		int r=num;
		int mid;
		while(l<=r){
			mid=(l+r)/2;
			if(l==r){
				if(coins[i]>=price[r] && mid!=num)
				cout<<mid+1<<endl;
				
				else
				cout<<mid<<endl;
				break;
			}

		
			else if(coins[i]<price[mid]){
				r=mid;
				
			}
			else if(coins[i]>=price[mid]){
				l=mid+1;
			}
				
		}
	}
	
	return 0; 
}
