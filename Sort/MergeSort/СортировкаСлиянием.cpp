#include <iostream>
using namespace std;

int main(){
int x;
cin>>x;
int c[x];
for(int i=0;i<x;i++){
	cin>>c[i];
}
    int n=(x+1)/2;
    int a[n];

    for(int i = 0; i < n; ++i){
         a[i]=c[i];
    }

    int m=x/2;
    int b[m];

    for(int i = 0; i < m; ++i){
        b[i]=c[x-1-i];
    }
    
    
    
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m){

        if(a[i] < b[j]){
            c[k] = a[i];
            i++;

        }
		else{
            c[k] = b[j];
            j++;
        }
        
        k++;
    }
    
    while(i < n){
       c[k++] = a[i++];
    }

    while(j < m){
        c[k++] = b[j++];
    }
    
    for(int i = 0; i < x; ++i){
        cout << c[i] << " ";
    }
    
}
