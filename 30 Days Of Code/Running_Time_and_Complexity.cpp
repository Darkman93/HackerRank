/********************************
    Task:
        A prime is a natural number greater than  that has no positive divisors other than  and itself. Given a number, , determine and print whether it's  or .

        Note: If possible, try to come up with a  primality algorithm, or see what sort of optimizations you come up with for an  algorithm. Be sure to check out the Editorial after submitting your code!
 *******************************/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool prime(int n);

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    for (int i = 2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int T,N;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;

        if(isPrime(N)){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not prime" << endl;
        }
    }  


    return 0;
}
