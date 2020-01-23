#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
vector <int> vec;
int num;
int x;
cin>>num;
for(int i=0;i<num;i++){
	cin>>x;
	vec.push_back(x);
}	

sort(vec.begin(),vec.end());

int min = vec[0];
 for(int i=0;i<num;i++){
 
 	if(vec[i]==vec[num-1]){
 		vec[i]=min;
	 }
	 cout<<vec[i]<<" ";
 }

}
