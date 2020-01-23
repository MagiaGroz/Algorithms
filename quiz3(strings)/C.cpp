#include <iostream>
#include <vector>

using namespace std;
vector<int> times;
int k=0;
void f(string s){
	int max=-1000;
    vector<int> p(s.size());
    p[0] = 0;
    
cout<<"LOL1";

    for(int i = 1; i < s.size(); ++i){
    	    

        int j = p[i-1];
        while(j > 0 && s[i] != s[j]){
            j = p[j-1];
        }

        if(s[i] == s[j]){
            j++;
        }

        p[i] = j;
        if(p[i]>max){
        	max=p[i];
		}
		if(i==s.size()-1)
		times[k++]=max;
    }
	
    
}

int main(){
	
    string text;
    	
    int n;
    cin>>text;
    cin>>n;
    	text[0]=text[0]+32;
    	int maxx=-1;
    	int h=0;
    	string pattern[n];
    	string temppat;
    	for(int i=0;i<n;i++){
		cin>>temppat;
		temppat[0]+=32;
    	pattern[i]=temppat;
    	
    }
    for(int i=0;i<n;i++){
//	cout<<text<<" "<<pattern<<endl;
cout<<pattern[i]+text<<endl;
   f(pattern[i]+'#'+text);
    	if(maxx<times[i])
    	maxx=times[i];
    
}
cout<<"fsefs";
for(int i=0;i<n;i++){
	if(maxx==times[i])
	cout<<pattern[i];
}

    return 0;
}
