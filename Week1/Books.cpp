#include <iostream>

using namespace std;

int main(){
	int books,min;
	
	int bkmin[11000];
	int pref[11000];
	for(int i=0;i<books;i++){
		cin>>pref[i];
		pref[i]+=pref[i-1];
		cout<<pref[i]<<" ";
	}

	/*
	int l=0;
	int r=books;
	int mid;
	while(l<=r){
		mid = (l+r)/2;
		if(l==r){
			
		}
		
		else if()
	}
	*/
}
