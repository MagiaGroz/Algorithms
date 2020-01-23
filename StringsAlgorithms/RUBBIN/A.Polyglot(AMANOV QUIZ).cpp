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
	int max=-1;
	cin>>n;
	int arr[n];
	
    string t;
    string p[n];
    for(int i=0;i<n;i++){
    	cin>>p[i];
	}
	cin>>t;
    for(int i=0;i<n;i++){
  arr[i]= find(t, p[i]) ;
  if(arr[i]>max){
  	max=arr[i];
  }
			}
cout<<max<<endl;
for(int i=0;i<n;i++){
	if(arr[i]==max){
		cout<<p[i]<<endl;
	}
}
    return 0;

}
