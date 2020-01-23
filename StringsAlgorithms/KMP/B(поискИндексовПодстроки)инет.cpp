#include <iostream>
#include <vector>

using namespace std;

vector<int> f(string s){
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
    }

    return p;
}

int main(){
	string pattern;
    string text;
    cin>>text;
	cin>>pattern;
    vector<int> p = f(pattern+'#'+text);
    
    for(int i = 0; i < p.size(); ++i){
    	if(p[i]==pattern.length())
    	cout<<i-pattern.length()*2<<" ";
        
    }

    return 0;
}
