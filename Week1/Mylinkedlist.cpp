#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
};

class LinkedList{
	node *head, *tail;
	
	public: LinkedList(){
		head=NULL;
		tail=NULL;
		
	}
	add(int n){
		node *temp = new node();
		temp->data=n;
		temp->next=NULL;
		temp->prev=NULL;
		
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			temp->prev=tail;
			tail=temp;
		}
	}
	
	void front(){
		cout<<head->data<<endl;
	}
	
	void showAll(){
		node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	}
	void Reverse(){
		node *temp = tail;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->prev;
	}
	}
};
int main(){
	LinkedList ll;
	ll.add(1);
	ll.add(2);
	ll.add(3);
	ll.add(4);
	ll.Reverse();
	ll.front();
}
