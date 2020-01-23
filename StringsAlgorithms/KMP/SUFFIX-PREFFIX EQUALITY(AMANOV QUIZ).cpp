#include <iostream>
#include <vector>

using namespace std;

vector<int> f(string s){
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
		cout<<max;
    }

    return p;
}

int main(){
	string pattern;
    string text;
    
	cin>>pattern;
	cin>>text;
    vector<int> p = f(pattern+'#'+text);
    
    
        
    

    return 0;
}
