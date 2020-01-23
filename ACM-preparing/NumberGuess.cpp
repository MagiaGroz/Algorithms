#include <cstdlib> 
#include <iostream>
#include <ctime> 
 using namespace std;
int main()
{
	
    srand(static_cast<unsigned int>(time(0))); 
 
 int x=rand()%100 ;
    
 int counter=0;
 int num=0;
    while(cin){
    	cin>>num;
    	counter++;
    	if(num>x){
    		cout<<"Try lower"<<endl;
		}
		else if(num<x){
			cout<<"Try higher"<<endl;
		}
		else if(num==x){cout<<"You got it in "<<counter<<" trails";
		break;}
    	
	}
	
}
