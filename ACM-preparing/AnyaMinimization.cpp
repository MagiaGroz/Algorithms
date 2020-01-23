#include <iostream>
using namespace std;
int main(){
	string s;
	int num,k;
	cin>>num>>k;
	cin>>s;
	int cnt=0;
	if(k==0){
		cout<<s;
		return 0;
	}
	if(num==1){
		cout<<"0";
		return 0;
	}
	if(s[0]!='1'){
			s[0]='1';
			cnt++;
		}
	for(int i=1;i<s.size();i++){
		if(cnt==k){break;
		}
		if(s[i]!='0'){
			s[i]='0';
			cnt++;
		}
		
	}
	cout<<s;
}
