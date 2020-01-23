#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int> vec;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		vec.push_back(x);
	}
	
	sort(vec.begin(),vec.end());
	double res;
	int i=0;
	while(vec.size()!=1){
	if(i==vec.size()-1){
		sort(vec.begin(),vec.end());
		i=0;
					   }
		vec[i+1]=vec[i]+vec[i+1];
		res+=vec[i+1]*0.05;
		vec.erase(vec.begin()+i);
		cout<<vec[i]<<" ";
		i++;
}
printf("%.6lf",res);
    return 0;
}





