#include <iostream>
#include <vector>
using namespace std;
int main(){
	string s;
	getline(cin,s);;
	vector<string> vec;
	string temp="";
	for(int i=0;i<s.size();i++){
		
		if(s[i]!=' '){
			temp+=s[i];
			if(s[i+1]==' '||i+1==s.size()){
				
				vec.push_back(temp);
			temp="";
			}
		}
	}
	string l=vec[vec.size()-1];
	int anum=0;
	int bnum=0;
	cout<<vec.size()<<endl; 
	for(int i=0;i<l.size();i++){
		if(l[i]=='a')
		anum++;
	}
	cout<<" number of symbol a : "<<anum<<endl; 
	for(int i=0;i<vec.size();i++){
		temp = vec[i];
		if(temp[0]=='B')
		bnum++;
	}
	cout<<" number of words starting on symbol B : "<<bnum;
}
