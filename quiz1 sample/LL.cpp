#include <iostream>
using namespace std;
struct Node(){
	int data;
	Node * next;
	Node * prev;
}

class LinkedList(){
	Node *head, *tail;
	LinkedList(){
		head = NULL;
		tail = NULL;
	}
	
	void add(int x){
		Node * temp = new Node();
		temp = NULL;
		temp->data = x;
		temp->next=NULL;
		temp->prev=NULL;
		if(head==NULL){
			head = temp;
			tail  = temp;
		}
		else {
			tail->next=temp;
			temp->prev = tail;
			tail = temp;
		}
	}
	
	void show(){
		Node *temp = new Node();
		temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}
}
int main(){
	
	
}
