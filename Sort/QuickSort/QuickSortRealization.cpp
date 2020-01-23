#include <iostream>
#include <ctime>
using namespace std;
int first, last;


void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
 		// for avoiding overload l+(r-l)/2
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int main()
{
	int n;
	cin>>n;
	int A[n];
	
	for (int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	
	first=0;
	 last=n-1;
	quickSort(A, first, last);
	
	for (int i=0; i<n; i++) 
	cout<<A[i]<<" ";
	
	return 0;
}
