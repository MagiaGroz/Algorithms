#include <iostream>
#include <vector>
#include <map>
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

map<int,int> mp;
void printlist(node * root){
	if(root != NULL){
	
    
    	printlist(root->left);
    
        cout << root->val <<" ";
    	cout<<mp.find(root->val)->second<<endl;
    	printlist(root->right);
	
}
}

int main(){
	vector<int> vec;
	 node * root = NULL;
	 int k;
	 
while(cin){
	cin>>k;
	if(k==0)
	break;
	mp[k]+=1;
	vec.push_back(k);
}

   for(int i = 0; i < vec.size(); ++i){
        root = add(root, vec[i]);
    }
    printlist(root);

    return 0;
}
