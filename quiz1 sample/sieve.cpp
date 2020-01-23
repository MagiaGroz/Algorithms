#include <iostream>



using namespace std;



int n;

bool was[1005];



int main() {

    /*

        get all primes from 1 to n

    */

    cin >> n;

    was[1] = true;

    for (int i = 2; i * i <= n; i++) {

        if (!was[i]) { // this number must be prime

            // remove all numbers divisible by i: 2i, 3i, 4i, ...

            for (int j = i + i; j <= n; j += i) {

                was[j] = 1;

            }

        }

    }

    

    for (int i = 1; i <= n; i++) {

for(int j=1;j<=n;j++){
	
	if((!was[i] && !was[j]) && i+j==n){
		cout<<i<<" "<<j<<endl;
		return 0;
	}
}
       

    }

    cout << "\n";



    return 0;

}
