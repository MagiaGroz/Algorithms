#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    struct TrieNode{
        TrieNode* arr[26];
        bool eow;
    };
    
    /**Build a function to make a node and return TrieNode **/
    TrieNode* getNode()
    {
        TrieNode* node = new TrieNode;
        for(int i=0;i<26;i++)
            node->arr[i]=NULL;
        node->eow = false;
        
        return node;
    }
    
    /** Make the root TrieNode **/
    TrieNode* root;
    
    Solution(){
        root = getNode();
    }
    
    void insert(string word)
    {
        TrieNode* temp = root;
        for(int i=0;i<word.size();i++)
        {
            int index = word[i] - 'a';
            if(temp->arr[index]==NULL)
                temp->arr[index] = getNode();
            temp = temp->arr[index];
            
        }
        temp->eow = true;
    }
    
    
    /** SPECIAL Search function specially for this problem **/
    
    string search()
    {
        string ans="";
        int maxvalue=0;
        spsearch(root,0,"",maxvalue,ans);
        
        return ans;
    }
    
    void spsearch(TrieNode* r,int curr,string currstr,int& max,string& ans)
    {
        TrieNode* temp = r;
        
        //For each node check all alphabets from a-z (Since lexico) 
        for(int i=0;i<26;i++)
        {
            if(temp->arr[i]==NULL)
                continue;
            
            if(temp->arr[i]->eow)
            {
                curr++;
                currstr+=(char)(i+'a');
                
                // cout<<"--------------------"<<endl;
                // cout<<" Word: "<<(char)(i+'a')<<"   "<<curr<<"  y: "<<currstr<<endl;
                ans = curr>max ? currstr : ans;
                max = curr>max ? curr : max;
                
                
                // cout<<" Word: "<<(char)(i+'a')<<"   "<<max<<"  y: "<<ans<<endl;
                // cout<<"--------------------"<<endl;
                spsearch(temp->arr[i],curr,currstr,max,ans);

                curr--;
                currstr.resize(currstr.size()-1);
                //currstr.pop_back() only in c++ 11;
                
            }
            
        }//for
    }
    
    /** Main Function **/
    string longestWord(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        insert(words[i]);
        
        string result = search();
        
        return result;
    }
};

int main(){
	Solution s;
	vector<string> v;
	v.push_back("l");
	v.push_back("la");
	v.push_back("lat");
	v.push_back("latt");
	v.push_back("latte");
	v.push_back("c");

	cout<<s.longestWord(v);
}
