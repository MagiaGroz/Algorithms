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
	int h = 0;
		node* add(node *root, int x){
		
			if (root==NULL){
				return new node(x);
			}
			if(x>root->val){
				root->right=add(root->right,x);
			}
			else if(x<root->val){
				root->left=add(root->left,x);
			}		
	}
	
	void print(node * root){

    if(root != NULL){

        print(root->left);

        cout << root->val << " ";

        print(root->right);
    }	
}
void printlist(node * root){
	if(root != NULL){
	if(root->left == NULL&&root->right==NULL){
        cout << root->val << " ";
    }
    else{
    	printlist(root->left);
    	printlist(root->right);
	}
}
}

node * find(node * root, int x){

    if(root == NULL) return NULL;

    if(root->val == x) return root;

    if(root->val > x) return find(root->left, x);

    return find(root->right, x);

}

int main(){
	vector<int> vec;
	 node * root = NULL;
	 int k;
	 
while(cin){
	cin>>k;
	if(k==0)
	break;
	vec.push_back(k);
}

    for(int i = 0; i < vec.size(); ++i){
        root = add(root, vec[i]);
    }

    printlist(root);

    return 0;
}
