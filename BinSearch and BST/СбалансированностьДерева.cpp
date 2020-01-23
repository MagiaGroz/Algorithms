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

vector<int> vec;

void print(node * root){

    if(root != NULL){
		
        print(root->left);
		vec.push_back(root->val);
        print(root->right);

    }

}

int main(){
	
	 node * root = NULL;
	 int k;
	 
while(cin){
	cin>>k;
	if(k==0)
	break;
	vec.push_back(k);
}
k=vec.size();
   for(int i = 0; i < k; ++i){
        root = add(root, vec[i]);
    }
   print(root);
   
    for(int i = k; i < vec.size()-1; ++i){
        if(vec[i+1]-vec[i]>1){
        	cout<<"NO";
        	return 0;
		}
		
    }
    cout<<"YES";

    return 0;
}
