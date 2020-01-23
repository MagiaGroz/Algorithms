#include <iostream>
#include <set>
using namespace std;
int k[100100];
int main(){
	string s;
	int q;
	int vid,l,r;
	int j=0;
	char zam;
	cin>>s;
	scanf("%d",&q);
	
		for(int i=0;i<q;i++){
			
			scanf("%d",&vid);
		if(vid==1){
				scanf("%d",&l);
				cin>>zam;
				s[l-1]=zam;
			}
		else {
			set<char> st;
			scanf("%d %d",&l,&r);
			
				for(int i=l;i<=r;i++){
					st.insert(s[i-1]);
							    		}
	
			k[j]=st.size();
			j++;
	
}
							}
							for(int i=0;i<j;i++){
								printf("%d \n",k[i]);
							}
	
}
