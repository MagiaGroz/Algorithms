#include <iostream>
#include <vector>

using namespace std;

int f(string s){
	int max=-1000;
    vector<int> p(s.size());
    p[0] = 0;

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
		return max;
    }

    return max;
}

int main(){
	string pattern;
    string text;
    
	cin>>pattern;
	cin>>text;
	int t1=f(pattern+'#'+text);
	int t2=f(text+'#'+pattern);
	if(t1>t2){
		cout<<t1;
		
	}
	else
    cout<< t2;
    
    
        
    

    return 0;
}
