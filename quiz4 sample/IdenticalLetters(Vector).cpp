#include <iostream>
#include <vector>
using namespace std;

int main(){

		string temp;
		cin>>temp;
	vector<char> v;
	for(int i=0;i<temp.size();i++){
		v.push_back(temp[i]);
	}		
		for(int i=0;i<temp.size()-1;i++){
			if(v[i]!=v[i+1]&& v.size()==2){
					cout<<"NO";
				return 0;
			}
			if(v[i]==v[i+1]){
				v.erase(v.begin()+i);
					v.erase(v.begin()+i);
					if(i>0)
					i=i-2;
					else
				i=i-1;
			}
			if(v.size()==1){
				cout<<"NO";
				return 0;
			}
				if(v.empty()){
		cout<<"YES";
		return 0;
	}
		}
	
		
		cout<<"NO";	
			
	
	}	
	
		
	

