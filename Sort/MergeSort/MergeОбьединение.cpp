#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    int m=n;
    int b[m];

    for(int i = 0; i < m; ++i){
        a[i]=i*i;
        b[i]=i*i*i;
    }
    
    int c[n+1];
    
    int i = 1;
    int j = 1;
    int k = 0;

    while(i < n && j < m){

        if(a[i] < b[j]){
            c[k] = a[i];
            i++;

        }
		else if(a[i] > b[j]){
            c[k] = b[j];
            j++;
        }
        else{
        	c[k]=b[j];
        	i++;
        	j++;
		}
        
        k++;
        if(k>=n){
        	cout<<c[n-1];
        	return 0;
		}
    }
    
    while(i < n){
       c[k++] = a[i++];
    }

    while(j < m){
        c[k++] = b[j++];
    }
    
   if(n==1){
   	cout<<1;
   }
   else if(n==2){
   	cout<<4;
   }
   else
    cout<<c[n-1];
}
