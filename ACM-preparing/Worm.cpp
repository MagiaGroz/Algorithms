#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int num,numj;
	cin>>num;
	
	int pil[1000100];
	int jui[100100];
	
	
	for(int i=0;i<num;i++){
		cin>>pil[i];
	}
		cin>>numj;
		
		for(int i=0;i<numj;i++){
			cin>>jui[i];
		}
		
		sort(pil,pil+num);
		
			for(int i=0;i<num;i++){
		cout<<pil[i]<<" ";
	}
	
}
