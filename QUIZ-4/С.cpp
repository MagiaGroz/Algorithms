#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()

int main()

{

int n,a;

while(cin>>n&&n>0){

int x[n+1];

int f=1;

for(int i=1;i<=n;i++)x[i]=i;

stack<int>s;

for(int i=0;i<n;i++)

{

    cin>>a;

    s.push(a);

    while(!s.empty())

    {

        if(s.top()==x[f])

        {

            f++;

            s.pop();

        }

        else break;

    }

}

if(s.size()==0)

    cout<<"yes";

else cout<<"no";

cout<<endl;

}

    return 0;

}
