#include<iostream> 
#include<algorithm> // for heap operations 
#include<vector>
using namespace std; 
int main() 
{ 
      int q,k;
      cin>>q>>k;
    vector<int> v1;
    long long sum=0;
    string s;
    int num;
	for(int i=0;i<q;i++){
		cin>>s;
		if(s=="insert"){
			
			cin>>num;
			v1.push_back(num);
    		make_heap(v1.begin(), v1.end()); 
		}
		else if(s=="print"){
			sum=0;
			if(v1.size()==0){
				cout<<sum;
				continue;
			}
			sort_heap(v1.begin(),v1.end());
			for(int i=0;i<v1.size();i++){
				if(i>=k)
				break;
				sum+=v1[v1.size()-1-i];
			}
			cout<<sum;
		}
	} 
      
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
      
  
    return 0; 
}
