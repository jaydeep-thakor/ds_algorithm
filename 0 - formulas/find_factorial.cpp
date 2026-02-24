#include <iostream>
using namespace std;

int findFactorial(int n){

    int factorial = 1;

    for(int i = 1; i<=n; i++){
        factorial = factorial * i;
    }

    return factorial;

}

int main(){

int finalFactorial = findFactorial(5);
cout << finalFactorial << endl;

}

