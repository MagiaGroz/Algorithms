#include <iostream>
#include <set>
using namespace std;
int main(){
	set<char> st;
	string s;
	cin>>s;
	int size;
	for(int i=0;i<s.length();i++){
		size=st.size();
		st.insert(s[i]);
		if(st.size()==size){
			cout<<s.length()/st.size();
			break;
		}
	}
}
