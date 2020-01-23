#include <iostream>
#include <vector>
using namespace std;

int main(){
	int len;
	cin>>len;
	vector<char> vec;
	for(int i=0;i<len;i++){
		char x;
		cin>>x;
		vec.push_back(x);
	}
	
	for(int i=0;i<vec.size()-1;i++){
		if((vec[i]=='1'&&vec[i+1]=='0')||(vec[i]=='0'&&vec[i+1]=='1')){	
	
			vec.erase(vec.begin()+i);	
			vec.erase(vec.begin()+i);	
			if(i!=0)
			i=i-2;
			else 
			i--;		
		}
		if(vec.size()==0)
		break;
		
	}
	
	cout<<vec.size();
}
