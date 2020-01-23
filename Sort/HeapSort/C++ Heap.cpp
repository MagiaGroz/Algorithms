#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
 
 using namespace std;
int main()
{
    cout << "Max heap:\n";
 	int arr[] = { 3, 2, 4, 1, 5, 9  };
    vector<int> v ;
    int siz = sizeof(arr)/sizeof(int);
 	for(int i=0;i<siz;i++){
 		v.push_back(arr[i]);
	 }
    cout << "initially, v: ";
    for(int i=0;i<v.size();i++){
 		cout<<v[i]<<" ";
	 }
    cout << '\n';
 
    make_heap(v.begin(), v.end());
 
    cout << "after make_heap, v: ";
    for(int i=0;i<v.size();i++){
 		cout<<v[i]<<" ";
	 }
	 cout<<'\n';
 
    pop_heap(v.begin(), v.end());
 
    cout << "after pop_heap, v: ";
    for(int i=0;i<v.size();i++){
 		cout<<v[i]<<" ";
	 }
    std::cout << '\n';
 
    int top = v.back();
    v.pop_back();
    std::cout << "former top element: " << top << '\n';
 
    std::cout << "after removing the former top element, v: ";
    for(int i=0;i<v.size();i++){
 		cout<<v[i]<<" ";
	 }
    std::cout << '\n' << '\n';
 ////////////////////////////////////////////////////////////////
    std::cout << "Min heap:\n";
 
    int arr1[] = { 3, 2, 4, 1, 5, 9  };
    vector<int> v1 ;
    int size = sizeof(arr1)/sizeof(int);
 for(int i=0;i<size;i++){
 		v1.push_back(arr[i]);
	 }
    std::cout << "initially, v1: ";
    for(int i=0;i<v1.size();i++){
 		cout<<v1[i]<<" ";
	 }
    std::cout << '\n';
 
    make_heap(v1.begin(), v1.end(),);
 
    std::cout << "after make_heap, v1: ";
    for(int i=0;i<v1.size;i++){
 		cout<<v1[i]<<" ";
	 }
    std::cout << '\n';
 
    std::pop_heap(v1.begin(), v1.end(), std::greater<>{});
 
    std::cout << "after pop_heap, v1: ";
	for(int i=0;i<v1.size;i++){
 		cout<<v1[i]<<" ";
	 }    std::cout << '\n';
 
    auto top1 = v1.back();
    v1.pop_back();
    std::cout << "former top element: " << top1 << '\n';
 
    std::cout << "after removing the former top element, v1: ";
    for(int i=0;i<v1.size;i++){
 		cout<<v1[i]<<" ";
	 }
    std::cout << '\n';
}
