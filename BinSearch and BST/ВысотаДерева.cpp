#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iostream>
 
using namespace std;

struct Node {
    Node* l, *r;
    char  x;
};  
void Node_Add(Node*& p, char x);
void Node_Clear(Node* p);
int  Node_Height(const Node* p);
 
int main(void){
 
    Node* tr = NULL;
    
    int n,how_much; 
    char x;
    
 cin>>n;
 char *s = new char[n];
  int count=0;
     for(; count<n; count++)
     {
         cout << "??????? ??????? #" << count+1 << " : ";
         cin >> s[count];
        Node_Add(tr, s[count]);
     }
 
    cout << "height: " << Node_Height(tr) << std::endl;
    Node_Clear(tr);
    delete []s;
    getch ();
    return 0;
}
 
void Node_Add(Node*& p, char x){
    if(p == NULL){
        p = new (std::nothrow) Node();
        if(p != NULL){
            p->l = p->r = NULL;
            p->x = x;
        }
    } else if(x < p->x)
        Node_Add(p->l, x);
    else
        Node_Add(p->r, x);
}
 //удаление всех
void Node_Clear(Node* p){
    if(p != NULL){
        if(p->l != NULL)
            Node_Clear(p->l);
        if(p->r != NULL)
            Node_Clear(p->r);
        delete p;
    }
}
 
int Node_Height(const Node* p){
    int l, r, h = 0;
    if(p != NULL){
        l = Node_Height(p->l);
        r = Node_Height(p->r);
        h = ((l > r) ? l : r) + 1;
    }
    return h;
}
