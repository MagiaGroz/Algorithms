#include <iostream>
#include <vector>
using namespace std;
	int num;
	int scr;
	int a[1000000];
	vector<int> vec;
int main(){

	cin>>num>>scr;
	
	for(int i=0;i<num;i++){
		cin>>a[i];
	}
	bool exist ;
	for(int i=0;i<num;i++){
		exist = false;
		for(int j=0;j<vec.size();j++){
			
			if(a[i]==vec[j]){
			
			exist=true;
			break;
		}
		}
		if(!exist){
		
			if(vec.size()==scr)
	vec.erase(vec.begin());	
		vec.push_back(a[i]);
	}
	}
	cout<<vec.size()<<endl;
	for(int i=vec.size()-1;i>=0;i--){
		cout<<vec[i]<<" ";
	}
	
}
