#include <iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	string sub[n];
	for(int i=0;i<n;i++){
		cin>>sub[i];
	}
	for(int i=0;i<n;i++){
		if(s.find(sub[i])!=string::npos)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
