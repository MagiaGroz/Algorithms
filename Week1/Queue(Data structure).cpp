#include <iostream>
using namespace std;

struct node{
	
};
struct queue{
	int ar[1000];
	int start=0;
	int finish=0;
	
	string	push(int n){
		ar[finish]=n;
		finish++;
		return "ok";
	}
	
	int pop(){
		int l = ar[start];
		start++;
		return l;
	}
	
	int front(){
		return ar[start];
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
            cout << x.pop() << endl;
        }

        if(a == "front"){
            cout << x.front() << endl;
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
