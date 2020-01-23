#include <iostream>

#include <map>
using namespace std;

int main(){
	multimap<int,int> mp;
	
	int kirito;
	int num;

	
	cin>>kirito>>num;
	for(int i=0;i<num;i++){
		int x,y;
		cin>>x;
		cin>>y;
		mp.insert(pair<int, int>(x,y));
		
	}
	
		multimap<int, int>::iterator it=mp.begin();
	
	
	for (int i = 0; i<num; it++,i++){
		
		if(kirito>it->first)
		kirito+=it->second;
		if(i+1==num){
			if(kirito>it->first)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
		}
	}


}
