#include <bits/stdc++.h>
using namespace std;

int main(){
int num,p;
cin>>num>>p;

int s[num];
int cnt=0;
long long ans=0;

for(int i=0;i<num;i++){
	cin>>s[i];
}

int max=s[num-1];

for(int i=num-1;i>=1;i--){
	
	while(s[i-1]<=s[i]){
		if(i!=num-1){	
		if(s[i+1]>s[i])
		i=i+1;
	}
	
			ans+=s[i];
			s[i]--;
			cnt++;
			
			if(cnt==p){
				cout<<ans;
				return 0;
			}
	}
	if(i==1){
				while(s[i-1]!=0){
				
						if(i-1!=num-1){	
						if(s[i]>s[i-1])
							i=i+1;
							}
						//	cout<<s[i]<<endl;
				ans+=s[i-1];
				s[i-1]--;
				cnt++;
					
				if(cnt==p){
					cout<<ans;
					return 0;
				}
		}
	}
}

}
