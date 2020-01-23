#include <iostream>
#include <vector>

using namespace std;

int f(string s,int ps){ // text and pattern size
	int max=-1000;
    vector<int> p(s.size());
    p[0] = 0;
    int j=0;
    for(int i = 0; i < s.size()-ps; ++i){ // идем только до размера строки
    
		if(i!=0)
		 j = p[i-1];
		while(j > 0 && s[j] != s[ps+i]){
            j = p[j-1];
        }

        if(s[j] == s[ps+i]){ // сравниваем начало паттерна с началом текста
            j++; // нашли одинаковый элемент тогда каунтер++
             p[i] = j; // запомнить последовательность одинаковых префиксов
             
            if(s[j-1]!=s[s.size()-1]) // нужно сравнить найденный нами префикс паттерна является ли суффиксом текста
			j=0;
        }
			
       
        
        //cout<<s[j]<<" "<<s[ps+i]<<endl;
        //cout<<p[i]<<endl;
        if(j>max){
        	max=j;
		}
	
    }
    
	return max;
    
}

int main(){
	
    string text;
    	
    int n;
    int count=0;
    cin>>text;
    text[0]=text[0]+32;
    cin>>n;
    int times[n]; // массив который хранит суффикс какого паттерна сколько раз встретился
    	int maxx=-1;
    	int h=0;
    	string pattern[n];
    	string temppat;
    	for(int i=0;i<n;i++){
		cin>>temppat;
		temppat[0]+=32;
    	pattern[i]=temppat;
    }
   
    for(int i=0;i<n;i++){
   times[i]=f(pattern[i]+text,pattern[i].size());
    	if(maxx<times[i])
    	maxx=times[i];    
}

for(int i=0;i<n;i++){
	if(maxx==times[i])
	count++;
}
cout<<count<<endl;
for(int i=0;i<n;i++){
	if(maxx==times[i]){
	pattern[i][0]-=32;
	cout<<pattern[i]<<endl;
}
}

    return 0;
}
