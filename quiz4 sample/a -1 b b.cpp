#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
int cases[n];
string res;

set<char> st;

char temp;
for(int i=0;i<n;i++){
	cin>>cases[i];
	char l[cases[i]];
	for(int j=0;j<cases[i];j++){
		
		cin>>l[j];
		if(j==0)
		temp = l[j];
		
		int k = st.size();
		st.insert(l[j]);
		if(k==st.insert){
			if(temp==l[j]){
				res+="-1";
			}
			else
			res+=l[j];
		}		
	}
}	
}
