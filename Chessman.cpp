#include <iostream>
#include <set>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	set<int> st;
	int p[q];
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		st.insert(x);
	}
	for(int i=0;i<q;i++){
		cin>>p[i];
	}
	
	set <int> :: iterator it ;
	for(int i=0;i<q;i++){
		
		
		it =st.lower_bound(p[i]);
		cout<<*it<<endl;
	}
	return 0;
}
