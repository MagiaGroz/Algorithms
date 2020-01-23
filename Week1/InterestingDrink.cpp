#include <iostream>
#include <vector>
using namespace std;
int main(){
	int shops;
	cin>>shops;
 	vector<int> prices;
 	vector<int> coins;
	
	 for(int i=0;i<shops;i++){
	prices.push_back(i);
	 }	
	int days;
	cin>>days;
	
	for(int i=0;i<days;i++){
		coins.push_back(i);
}

int a[10000];
for(int i=0;i<coins.size();i++){
	int x=0;
	for(int j=0;j<prices.size();j++){
		if(coins[i]>=prices[i]){
			x++;
		}
	}
	 a[i]=x;
}
for(int i=0;i<days;i++){
	cout<<a[i]<<endl;
}

}
