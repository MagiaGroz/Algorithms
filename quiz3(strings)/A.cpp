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
	string pat[100000];
	int maxm[100000];
	int l[100000];
	int mx=0;
	int patt=0;
	int k=0;
	int n[100000];
	int j=0;
	int u=0;
	   string t[100000];
    string p[100000];
	while(true){
	cin>>n[j];
	
	if(n==0)
	break;
    for(int i=0;i<n[j];i++){
    	cin>>p[patt];
    	patt++;
	}
	cin>>t[u];
	u++;
  j++;

}
int max=-1;
int arr[10000];
int kak=0;
int v=0;
for(int k=0;k<j;k++){

  for(int i=0;i<n[k];i++){

  arr[i]= find(t[v], p[kak]) ;
  if(arr[i]>max){
  	max=arr[i];
  }
  kak++;
			}
			cout<<max;
			int lol=0;
			for(int i=0;i<n[k];i++){
	if(arr[lol]==max){
		cout<<p[lol];
	}
	lol++;
}
v++;
		}

}
