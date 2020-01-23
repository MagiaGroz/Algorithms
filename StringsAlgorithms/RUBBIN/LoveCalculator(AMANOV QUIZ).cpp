#include <iostream>
#include <cmath>    
#include <set>
using namespace std;

int find(string text, string pattern){

    int n = text.size();
    int m = pattern.size();
    int res = -1;

    long long p[n];
    p[0] = 1;


    for(int i = 1; i < n; ++i){
        p[i] = p[i - 1] * 31;
    }


    long long h[n];

    h[0] = int(text[0] - 96);

    for(int i = 1; i < n; ++i){
        h[i] = h[i-1] + p[i] * int(text[i] - 96);
    }

    long long hp = 0;

    for(int i  = 0; i < m; ++i){
        hp += int(pattern[i] - 96) * p[i];
    }

    for(int i = 0; i <= n -m; ++i){
        long long x = h[i + m - 1];

        if(i > 0){
            x -= h[i-1];
        }

        if(x == hp * p[i]){

            res = i;
            break;
        }
    }
    return res;

}



int main(){
	set<string> st;
    string t, p;
    cin >> t >> p;
    
    int k=1;
    int l=0;
    for(int i=0;i<p.size();i++){
    	
    	if(find(t,p.substr(0,k))!=-1){
	    		st.insert(p.substr(0,k));    	
    }
    
    	if(l!=p.size()-1){
    		if(find(t,p.substr(l))!=-1){
    			st.insert(p.substr(l));
   		
 					  	}	}
   			l++;
    		k++;
    	if(find(t,p.substr(i,1))!=-1){
    		st.insert(p.substr(i,1));
    	  }
    
	}
    cout<<st.size() << endl;
    return 0;

}
