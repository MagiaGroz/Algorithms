#include <bits/stdc++.h>
using namespace std;
int main(){
int num,n;
int cnt =0 ,sum = 0;
cin>>num;
int enemies[num];
for(int i=0;i<num;i++){
	cin>>enemies[i];
}	
			cin>>n;
			int power[n];
		for(int i=0;i<n;i++){
		cin>>power[i];
		}
	for(int j=0;j<n;j++){
	for(int i=0;i<num;i++){
	if(power[j]>=enemies[i]){
		cnt++;
		sum+=enemies[i];
	}
				}
	cout<<cnt<<" "<<sum<<endl;
		cnt=0;
		sum=0;

}
}
