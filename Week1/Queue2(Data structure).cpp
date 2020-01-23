#include <iostream>
using namespace std;

struct node{
	
};
struct queue{
	int ar[1000];
	int start;
	int finish;
	
	queue(){
	start=0;
	finish=0;}
	
	string	push(int n){
		ar[finish]=n;
		finish++;
		return "ok";
	}
	
	void pop(){
		if(finish-start==0){
			cout<<"error"<<endl;
		}
		else{
		int l = ar[start];
		start++;
		cout<<l<<endl;
	}
	}
	
	
	void front(){
			if(finish-start==0){
			cout<<"error"<<endl;
		}
		else
		cout<< ar[start]<<endl;
	}
	
	int size(){
		return finish-start;
	}
	
	string clear(){
		for(int i=0;i<finish;i++){
			ar[i]=0;
		}
		start =0;
		finish =0;
		
		return "ok";
	}
	
	string exit(){
		return "bye";
	}
};
int main(){
	string a;
    queue x;
    while(cin >> a){
        if(a == "push"){
            int n;
            cin >> n;
           x.push(n);
           cout << "ok" << endl;
        }

        if(a == "pop"){
             x.pop();
        }

        if(a == "front"){
           x.front() ;
        }

        if(a == "size"){
            cout << x.size() << endl;
        }

        if(a == "clear"){
            cout << x.clear() << endl;
        }

        if(a == "exit"){
            cout << x.exit() << endl;
            return 0;
        }

    }
}
