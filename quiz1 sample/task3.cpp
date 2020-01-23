#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
};

class Stack{
	node *head, *tail;
		int max = -100000;
		bool nodel = false;
	
	int sum=0;
	public: Stack(){
		head=NULL;
		tail=NULL;
		
	}
	void add(int n){
		
		sum=sum+n;
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
	
	
void getmax(){
	node *temp = head;
	if(max==tail->data){
		cout<<max<<endl;
	}
	else if(head==NULL||head->data==-123){
	 cout<<"error"<<endl;
	 
	 }
else{
while(temp!=NULL){
		if(temp->data > max)
		max = temp->data;
		
		if(temp==tail){
			cout<<max<<endl;
			
			break;
		}
		temp=temp->next;
	}
}
	
}

	void getcur(){
		if(head==NULL||head->data==-123){
			cout<<"error"<<endl;
		}
		else
		cout<<tail->data<<endl;
	
	}
	

	void Delete(){
		if(nodel){
		}
	else	if(head==NULL){
		}
		else{
			
		if(tail!=head){
		if(tail->data==max){
		max=0;
		}
		node * temp = tail->prev;
		sum = sum - tail->data;
	tail->data=temp->data;
	if(tail->prev==head){
		nodel=true;
	}

		tail = tail->prev;
		
		tail->next=NULL;
	}
	else {
		head==NULL;
		head->data=-123;
	}
	}
	}


};
int main(){
 Stack ll;
 int num=0;
 cin>>num;
 string s;
 for(int i=0;i<num;i++){
 	cin>>s;
 	if(s=="add"){
 		int x;
 		cin>>x;
 		ll.add(x);
	 }
	 
	else if(s=="delete"){
	 	ll.Delete();
	 }
	else if(s=="getmax"){
	 	ll.getmax();
		 	 }
		 else	 if(s=="getcur"){
		 	 	ll.getcur();
			  }
 }
 
}
