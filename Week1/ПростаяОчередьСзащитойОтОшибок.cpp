#include <iostream>
#include <vector>
using namespace std;
 
struct que{
	private:
		vector<int> vec;
		int first;
		
		public:
			void push(int x){
				vec.push_back(x);
				cout<<"ok"<<endl;
			}
			
			void pop(){
				if(vec.size()==0)
				cout<<"error"<<endl;
			
			else{
			
				cout<<vec[0];
				for(int i=0;i<vec.size();i++){
					vec[i]=vec[i+1];
					
					
				}
		}
				
				}
			void front(){
					if(vec.size()==0)
				cout<<"error"<<endl;
				else
				cout<<vec[0]<<endl;
			}
			
			void size(){
				cout<<vec.size()<<endl;
			}
			void clear(){
				vec.clear();
			}
			string exit(){
				return "bye";
			}
};
int main(){
	que q;
	string s;
	int a;
	
	while(cin){
		cin>>s;
			if(s=="push"){		
		cin>>a;
		q.push(a);
	}
	else if (s=="pop")	
		q.pop();
	
	else if(s=="front")
	q.front();
	else if(s=="size")
	q.size();
	else if(s=="clear")
	q.clear();
	else if(s=="exit"){
	
	cout<<q.exit();
	return 0;	
}
	}
	}

	
