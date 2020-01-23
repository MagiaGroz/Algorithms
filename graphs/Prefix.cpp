#include<iostream>
#include<vector>

using namespace std;

vector<int> prefixFunction(string s){
    vector<int> p(s.size());
    p[0] = 0;

    for(int i = 1;i < s.size(); i++){      // aabaaa 010
        int j = p[i-1];                     // j = 2;
        while(j > 0 && s[j] != s[i]){       
            j = p[j-1];                     // j  
        }
        if(s[j] == s[i]){                   // j = 2
            j++;
        }
        p[i] = j;                           // p = j
    }
    return p;
}

int main(){
    string s,t;
    cin>>s>>t;
    string s1 = t + "#" + s;
    vector<int> a = prefixFunction(s1);
    for(int i = 0; i < a.size(); i++){
        if(a[i] == t.size()){
            cout<< i - 2*t.size()<<" ";
        }
    }
}