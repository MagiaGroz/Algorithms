#include <iostream>
#include <set>
using namespace std;
int main(){
	set <int> st;
	int x;
	cin>>x;
	int l;
	for(int i=0;i<x;i++){
		cin>>l;
		st.insert(l);
	}
	cout<<st.size();
}
