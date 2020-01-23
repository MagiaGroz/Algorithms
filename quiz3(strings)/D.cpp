#include <iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int mid = s.length()/2;
	
	string l;
	string r;
	int j=0;
	for(int i=0;i<mid;i++){
	
		if(s[i]=='A' || s[i]=='a'||s[i]=='Y' || s[i]=='y'||s[i]=='U' || s[i]=='u'||
	       s[i]=='I' || s[i]=='i'||s[i]=='O' || s[i]=='o'||s[i]=='E' || s[i]=='e'){
	       	cout<<s[i]<<"vower"<<endl;
	       	
		   }
		
		else{
			cout<<s[j]<<"right"<<endl;
		l[j]=s[j];
		j++;
	}
}
cout<<l;
}
