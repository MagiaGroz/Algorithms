#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num1,num2;
	cin>>num1>>num2;
	vector <int> vec1;
	vector <int> vec2;
	int x;
	for(int i=0;i<num1;i++){
		cin>>x;
		vec1.push_back(x);
	}
	
	for(int i=0;i<num2;i++){
		cin>>x;
		vec2.push_back(x);
	}
	sort(vec1.begin(),vec1.end());

	for(int i=0;i<vec2.size();i++){
		int l =0;
	int r=vec1.size();
	int mid;
	while(l<=r){
		mid=(l+r)/2;
			
	 if(l==r){
		if(vec2[i]>=vec1[mid] && r!=vec1.size()){
			cout<<mid+1<<" ";
		}
		else
		cout<<mid<<" ";
		break;
	}
	
	
		else if(vec2[i]>=vec1[mid]){
			l=mid+1;
		}
		
	else	if(vec2[i]<vec1[mid]){
			r=mid;
		}
		
		
	
//	cout<<l<<" "<<r<<endl;
	
	}
}
}
