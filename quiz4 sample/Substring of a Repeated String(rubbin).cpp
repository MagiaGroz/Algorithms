#include <iostream>
#include <cmath>    

using namespace std;
int cnt = 0;
void find(string text, string pattern){
	cnt=0;
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

            cnt++;
            
        }
    }
   

}



int main(){
    string t, p;
    int c=1;
    string temp;
    cin >> t >> p;
    temp=t;
    if(t.size()>p.size()){
    	find(t,p);
    	if(cnt>0){
    		cout<<"1"<<endl;
		}
		else
			cout<<"-1"<<endl;
	}
	else{
		while(true){
			find(temp,p);
			if(cnt==0){
			temp+=t;	
			c++;
			}
			else{
				cout<<c<<endl;
				return 0;
			}
		
		}
	}
   find(t, p) ;
    return 0;

}
