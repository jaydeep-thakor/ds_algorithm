#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n = 82;
    int digits = 0;
    int sum = 0;
    int power = 0;

    while(n!=1){

    while(n!=0){
        
        digits = n % 10;
        cout << "digits" << digits << endl;
        n = n / 10;
        power = pow(digits, 2);
        cout << "power" << power << endl;

        sum = power + sum;

    }

    cout << "sum = " << sum << endl;
    n = sum;
    sum = 0;

    }


}
