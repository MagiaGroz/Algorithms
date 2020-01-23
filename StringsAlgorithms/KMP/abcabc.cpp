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
	
    string text;
    cin>>text;

    vector<int> p = f(text);
    int len = text.size()-p[p.size()-1];
    cout<<text.size()/len;
   

    return 0;
}
