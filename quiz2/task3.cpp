#include <iostream>
#include <vector>
using namespace std;

struct node{
	int val;
	node *left;
	node *right;
	node(int dat){
	val=dat;
	left=NULL;
	right=NULL;
	}
};
	bool first = false;
	node *t = NULL;
		node* add(node *root, int x){
		
			if (root==NULL){
			if(!first){
				t = new node(x);
				first= true;
			}
				return new node(x);
			}
			if(x>root->val){
				root->right=add(root->right,x);
			}
			else if(x<root->val){
				root->left=add(root->left,x);
			}		
			
		return root;
	}
int num =0;

void printlist(node * root){
	if(root != NULL){
	
    
    	printlist(root->left);
    	if(root->left == NULL&&root->right==NULL){
        num++;
    }
    	printlist(root->right);
	
}
}

int main(){
	vector<int> vec;
	 node * root = NULL;
	 int k;
	 cin>>k;
	 int l;
	 for(int i=0;i<k;i++){
	 	cin>>l;
	 	vec.push_back(l);
	 }

   for(int i = 0; i < vec.size(); ++i){
        root = add(root, vec[i]);
    }
    printlist(root);
	cout<<num;
	
    return 0;
}
