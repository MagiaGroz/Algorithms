#include <iostream>
#include <cmath>    
#include <set>
using namespace std;
set<int> st;
int counter=0;
void find(string text, string pattern){

    int n = text.size();
    int m = pattern.size();
  

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
        	counter++;
			st.insert(i);
            
            
        }
    }
   

}



int main(){
    string t1,t2, p;
    cin >> t1 >>t2>> p;
   find(t1, p) ;
   find(t2,p);
   cout<<counter-st.size();
    return 0;

}
