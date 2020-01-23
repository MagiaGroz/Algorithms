#include <iostream>
#define MAXN 100000
using namespace std;

struct heap{

    
        int val[MAXN];
        int len;

   
        heap(){
            len = 0;
        }

        void sift_up(int c){

            int p = (c - 1) / 2;
            while(p >= 0 && val[c] > val[p]){

                swap(val[c], val[p]);
                c = p;
                p = (c - 1) / 2;
            }
        }

        void sift_down(int p){

            int c = 2 * p + 1;
            while(c < len){

                int mpos = c;
                if(c + 1 < len && val[c] < val[c + 1]){
                    mpos = c + 1;
                }

       

                if(val[p] < val[mpos]){
                    swap(val[p], val[mpos]);
                    p = mpos;
                    c = 2 * p + 1;
                }
				else{
                    break;
                }
            }
        }

        void add(int x){
           val[len] = x;
            len++;
            sift_up(len - 1);
        }
		


        int cut_max(){
            int res = val[0];
            val[0] = val[len - 1];
            len--;
            sift_down(0);
            return res;
        }

       
};

int main(){
	
    int n;
    cin>>n;
    int arr[n];
    heap h;

    for(int i = 0; i < n; ++i){
    	cin>>arr[i];
        h.add(arr[i]);
    }
	
    for(int i = 0; i < n; ++i){
    	int n1=h.cut_max();
    	int n2=h.cut_max();
    	if(n1-n2!=0)
    	h.add(n1-n2);
        
        if(h.len==1){
        	cout<<h.cut_max();
        	break;
		}
		if(h.len==0){
		cout<<"0";
		break;
	}
    }

    return 0;
}
