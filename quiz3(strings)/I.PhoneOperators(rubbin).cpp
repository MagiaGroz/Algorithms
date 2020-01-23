#include <iostream>
#include <cmath>    

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
	int n,m;
	cin>>n>>m;
	string p[n];
	string text[m];
	for(int i=0;i<n;i++)
	cin>>p[i];
	for(int i=0;i<m;i++)
	cin>>text[i];
	
    for(int i=0;i<m;i++){
    		if(text[i].size()==1){
    		cout<<"NO"<<endl;
    		continue;}
    	for(int j=0;j<n;j++){
    	
				if(find(text[i], p[j])==0){
    				if(text[i].length()>p[j].length()){
					cout<<"YES"<<endl;
					break;
					}
				
											}
	if(j==n-1) 
	cout<<"NO"<<endl;
	}
}
    return 0;

}
