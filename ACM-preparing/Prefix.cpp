#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.size()-1;i+=2){
		
		if(s[i]=='a' && s[i+1]=='a'){
			s[i+1]='b';
			c++;
						
		}
		else if(s[i]=='b'&& s[i+1]=='b'){
			s[i+1]='a';
			c++;
			
		}
	}
	
	cout<<c<<endl;
	cout<<s;
}
