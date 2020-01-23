#include <iostream>
using namespace std;

const int MAX_SIZE=1000;

struct Stack{
	int size;
	int ar[MAX_SIZE];
	Stack(){
		size=0;
	}
	};
	
	void push (Stack *p){
		int d;
		cin>>d;
		p->ar[p->size]=d;
		p->size++;
		cout<<"ok"<<endl;
	}
	
	void pop(Stack *p){
		if(p->size<1)
		cout<<"error"<<endl;
		else{
		
		cout<<p->ar[p->size-1]<<endl;
		p->size--;
	}
	}
	
	void back(Stack *p){
		if(p->size<1)
		cout<<"error"<<endl;
		else
		cout<< p->ar[p->size-1]<<endl;
	}
	
	int size(Stack *p){
		return p->size;
	}
	
	void clear(Stack *p){
		p->size=0;
		cout<<"ok"<<endl;
	}
	void exit(){
		cout<<"bye";
		
	}

int main(){
	Stack st ;
	string s;
	while(cin>>s){
	
	if(s=="push")
	push(&st);
	else if(s=="pop")
	pop(&st);
	else if(s=="back")
	back(&st);
	else if(s=="size")
	cout<<size(&st)<<endl;
	else if(s=="clear")
	clear(&st);
	else if(s=="exit"){
	exit();
	return 0;
					  }
				  }		
}
