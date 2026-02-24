#include <iostream>
using namespace std;

// nCr = n! / ( r! * (n - r*! )

int findFactorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int findNCR(int n, int r){

    int num = findFactorial(n);

    int denom = findFactorial(r) * findFactorial(n-r);

    return num/denom;

}

int main(){

    int finalAnswer = findNCR(8,2);
    cout << finalAnswer << endl;

}

