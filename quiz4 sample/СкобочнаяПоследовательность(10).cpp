#include <bits/stdc++.h>
using namespace std;
string toBin(int t){
	string binary;
	while(t!=0){
		if(t%2==0)
		binary+="0";
		else 
		binary+="1";
		t=t/2;
	}
	reverse(binary.begin(),binary.end());
	return binary;
}
int main(){
	int n;
	cin>>n;
	int temp[n];
	string res[n];
	int k=0;

	
	for(int i=0;i<n;i++){
		cin>>temp[i];
	}
	
	for(int j=0;j<n;j++){
	stack<char> st;
			
		   string binary = toBin(temp[j]);
		
			st.push(binary[0]);
			
		for(int i=1;i<binary.size();i++){
			if(st.empty()==false){	
			if(st.top()=='1'&&binary[i]=='0'){
				st.pop();
			}
			else st.push(binary[i]);
		}
			else 	
			st.push(binary[i]);
		
			if(i==binary.size()-1){
				if(st.empty()==true)
				cout<<"YES"<<endl;
				else
				cout<<"NO"<<endl;
			
			}
		}
	}	
	
		
	
}
