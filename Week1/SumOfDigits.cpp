#include <iostream>
using namespace std;

int main(){
string s="lol";
cin>>s;
int counter=0;
int k ;


while(1){

for(int i=0;i<s.length()-1;i++){
	s = int(s)-'0'+int(s[i])-'0';
}
counter++;
cout<<s;

}

cout<<counter;
}
