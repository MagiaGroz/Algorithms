#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){	
    int n;
    cin>>n;
    vector<int> v;
    int l;
    for(int i = 0; i < n; ++i){
    	cin>>l;
    	v.push_back(l);
    }
	make_heap(v.begin(),v.end());
	
    for(int i = 0; i < n; ++i){
	int max=v.front();
	pop_heap(v.begin(),v.end());
	v.pop_back();
	int max2=v.front();
    pop_heap(v.begin(),v.end());
    v.pop_back();
   		if(max-max2!=0){
    	v.push_back(max-max2);
    push_heap(v.begin(),v.end());
    }
        if(v.size()==1){
        	cout<<v.front();
        	break;
		}
		if(v.size()==0){
		cout<<"0";
		break;
	}
    }

    return 0;
}
