#include <bits/stdc++.h>
using namespace std;

int main(){

			string temp;
			cin>>temp;
			stack<char> st;	   
		
			st.push(temp[0]);
			
		for(int i=1;i<temp.size();i++){
			if(st.empty()==false){	
			if(st.top()==temp[i]){
				st.pop();
			}
			else st.push(temp[i]);
		}
			else 	
			st.push(temp[i]);
		
			if(i==temp.size()-1){
				if(st.empty()==true)
				cout<<"YES"<<endl;
				else
				cout<<"NO"<<endl;
			
			}
		}
	}	
	
		
	

