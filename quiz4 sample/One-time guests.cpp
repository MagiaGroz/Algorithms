#include <bits/stdc++.h>
using namespace std;
int main(){
	int num;
	vector<string> v;
	set<char> s;
	cin>>num;
	int cases[num];
	char curr;
	
	for(int i=0;i<num;i++){
		cin>>cases[i];
		char sym[cases[i]];
		for(int j=0;j<cases[i];j++){
			cin>>sym[j];
			if(j==0){
				v.push_back(sym[j]);
				s.insert(sym[j]);
			}
			else{
				int bef = s.size();
				s.insert(sym[j]);
				if(s.size()==bef){
					v.push_back("-1");
				}
				else 
					v.push_back(curr);
			}
				
		}
	}
	
}
