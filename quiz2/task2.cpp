#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	} 
};

class Tree {
public:
	int h=0;
	
	int r[10000];
	Node* root;

	Tree() {
		root = NULL;
	}

	Node* add(Node* root, int data) {
		
		if (root == NULL) {
			
			return new Node(data);
		} 
		else if (root->data > data) {
			root->left = add(root->left, data);
			
		} 
		else if (root->data < data) {
			root->right = add(root->right, data);
			
		}
		
		return root;
	}

	Node* find(Node* root, int x) {
		if (root == NULL) {
			return NULL;
		} else if (root->data == x) {
			return root;
		} else if (root->data < x) {
			return find(root->right, x);
		} else {
			return find(root->left, x);
		}
	}
			
	int getSubtreeHeight(Node* root) {
		
		if(root!=NULL){
			h++;
				
			getSubtreeHeight(root->left);
		
			
			getSubtreeHeight(root->right);
			
	}
	
	h--;
		 
    return h;
	}
	



};

int main(){
		
	 Node * root = NULL;
	 Tree t;
	 
	 int k;
	 cin>>k;
	 int a[k];
	 int c;
	 
	 
	 for(int i=0;i<k;i++){
	 	cin>>a[i];
	 	
	 }

   cin>>c;
   for(int i=c-1;i<k;i++){
   root = t.add(root, a[i]);
}
	cout<<t.getSubtreeHeight(root);

}
