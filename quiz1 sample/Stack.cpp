#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
};

class Stack{
	node *head, *tail;
	
	public: Stack(){
		head=NULL;
		tail=NULL;
		
	}
	void push_back(int n){
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
	
		void push_front(int n){
		node *temp = new node();
		temp->data=n;
		temp->next=NULL;
		temp->prev=NULL;
		
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			head->prev=temp;
			temp->next=head;
			head=temp;
		}
	}
	void back(){
		cout<<tail->data<<endl;
		tail=tail->prev;
	}
	void front(){
		cout<<head->data<<endl;
		head=head->next;
	}
	
	void showAll(){
		node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	}
	void reverse(){
		node * tail1 = tail;
		node * head1 = head;
	while(tail!=NULL){
		
		head1->data=tail1->data;
		tail1=tail1->prev;
		head1=head1->next;
		
	
	}

	
	}

};
int main(){
 Stack ll;
 ll.push_back(1);
 ll.push_back(2);
 ll.push_back(3);
 ll.push_back(4);
 ll.showAll();
	ll.reverse();
	ll.front();
	ll.front();
}
