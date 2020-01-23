#include <iostream>
#include <cmath>    

using namespace std;

int find(string text, string pattern){
int counter=0;
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
            
        }
    }
   
return counter;
}



int main(){
	int n;
	string text;

	string div= "\n";

	
	int alln=0;
	int max[500];
	int maxc=0;
	string result[500];
	while(true){
			int maxi=0;
		cin>>n;
		if(n==0)
		break;
		int pi[n];
		string patterns[n];
			for(int i=0;i<n;i++){
				cin>>patterns[i];
			}	
		cin>>text;
		for(int i=0;i<n;i++){
			
				pi[i]=find(text,patterns[i]);
			if(pi[i]>maxi)
			maxi=pi[i];
			
	}
	
	max[maxc]=maxi;
	
	for(int i=0;i<n;i++){
		if(maxi==pi[i])
		result[maxc]+=patterns[i]+div;
	}
	maxc++;
}
for(int i=0;i<maxc;i++){
	cout<<max[i]<<endl;
	cout<<result[i];
}
}
