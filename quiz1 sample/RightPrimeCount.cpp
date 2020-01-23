#include<iostream>

using namespace std;

bool is_prime(int n) {
    if (n == 1) {
        return false;
    }
    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}

int primeCounter(int n){
    int cnt=0;
    for(int i = 2;i <= n; i++){
        if(is_prime(i) && n%i==0)
            cnt++;
    }
    return cnt;
}

int main(){
    int a;
    cin>>a; 
    cout<<primeCounter(a);

}




//#include <iostream>
//
//
//
//using namespace std;
//
//
//
//bool isPrime(int x) {
//
//    if (x == 1) return false;
//
//    for (int i = 2; i * i <= x; i++) {
//
//        if (x % i == 0) {
//
//            return false;
//
//        }
//
//    }
//
//    return true;
//
//}
//
//
//
//int main() {
//
//
//
//    int p;
//
//    cin >> p;
//
//    cout << (isPrime(p) ? "Yes" : "No") << "\n";
//
//
//
//    return 0;
//
//}
