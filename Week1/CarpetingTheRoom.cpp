#include <iostream>
using namespace std;

int main(){
	double room,num,carpets;
	cin>>room>>num>>carpets;
	if(carpets*carpets*num>room*room){
		cout<<"YES";
	}
	else cout<<"NO";
}
