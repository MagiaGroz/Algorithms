#include <iostream>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

class Solution {

    struct node{

        map<char, node *> next;
        string prefix;
        bool isWord;

        node(string pr){
            isWord = false;
            prefix = pr;
        }

        void print(){
            cout << prefix << "=> is word: " << isWord << endl;

            map<char, node *> :: iterator it;

            for(it = this->next.begin(); it != this->next.end(); ++it){
                cout << it->first << " ";
            }  

            cout << endl;
        }
    };



    struct trie{

        node * root;

        trie(){
            root = new node("");
        }

        void add_string(string s){

            node * cur = root;

            for(int i = 0; i < s.size(); ++i){

                if(cur->next.find(s[i]) == cur->next.end()){
                    cur->next[s[i]] = new node(cur->prefix + s[i]);
                }

                cur = cur->next[s[i]];
            }
            cur->isWord = true;

        }    

        bool find(string s){

            bool found = true;
            node * cur = root;

            for(int i = 0; i < s.size(); ++i){

                if(cur->next.find(s[i]) == cur->next.end()){

                    found = false;

                    break;

                }

                cur = cur->next[s[i]];
            }
            return found && cur->isWord;
        }

        

        void print(node * cur){
        	
            cur->print();
            map<char, node *> :: iterator it;

            for(it = cur->next.begin(); it != cur->next.end(); ++it){
            print(it->second);
            } 

        }

    };



    public:

       string longestWord(vector<string>& words) {
        
          trie t;
          node* temp = t.root;

            for(int i = 0; i < words.size(); ++i){
                t.add_string(words[i]);
            }
            temp = temp->next['b'];
//            t.print(t.root);
            map<char, node *> :: iterator it;
            while(true){
            	
                  for(it = temp->next.begin(); it != temp->next.end(); ++it){
						if(it->second->isWord==true)
						cout<<it->second->prefix<<" ";
					}
					temp=temp->next[];
			}
            return temp->prefix;
    }

};



void test1(){

    Solution s;

    vector<string> dict; 
    dict.push_back("a");
    dict.push_back("banana");
    dict.push_back("app");
    dict.push_back("ap");
    dict.push_back("appl");
    dict.push_back("apple");
    dict.push_back("apply");
    
    cout << s.longestWord(dict) << endl;

}


int main(){
    test1();
    return 0;
}
